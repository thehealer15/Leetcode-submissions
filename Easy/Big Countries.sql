# Runtime: 324 ms, faster than 14.35% of MySQL online submissions for Big Countries.
# Memory Usage: 0B, less than 100.00% of MySQL online submissions for Big Countries.
# population
SELECT name,population,area
from World
where area>3000000 or population>25000000
