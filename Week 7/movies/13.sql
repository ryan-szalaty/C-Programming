SELECT DISTINCT people.name
FROM people
JOIN stars AS s1 ON s1.person_id = people.id
JOIN movies AS m1 ON m1.id = s1.movie_id
JOIN stars AS s2 ON s2.movie_id = m1.id
JOIN people AS kevin_bacon ON kevin_bacon.id = s2.person_id
WHERE kevin_bacon.name = 'Kevin Bacon' AND kevin_bacon.birth = 1958 AND people.name != 'Kevin Bacon';
