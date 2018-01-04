# bonsai
Indicateur d'humidité du sol pour mon bonsaï

# Montage
 * Capteur d'humidité Elecrow Moisture Sensor v1.0
 * Arduino UNO r3
 * LED
 
# Branchement
## Capteur d'humidité
 * Noir -> A0
 * Rouge -> +5V
 * Blanc -> Gnd
## LED
 * (+) -> 13
 * (-) -> Gnd

# Fonctionnement

Affiche un % d'humidité en fonction d'une base de temps de 5 secondes. Quand la LED reste allumée, il est temps d'arroser.
