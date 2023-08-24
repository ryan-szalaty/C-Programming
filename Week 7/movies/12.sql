SELECT movies.title FROM movies 
JOIN stars AS actor1 ON movies.id = actor1.movie_id
JOIN stars AS actor2 ON movies.id = actor2.movie_id 
JOIN people AS actor1 ON actor1.person_id = actor1.id 
JOIN people AS actor2 ON actor2.person_id = actor2.id 
WHERE actor1.name = "Bradley Cooper" AND actor2.name = "Jennifer Lawrence"