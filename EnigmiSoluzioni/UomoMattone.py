# Vidotti Simone, soluzione enigma UomoMattone.txt ;

# Problema:
# In un'Area circolare di 20 m^2, c'è un uomo al centro e un mattone in un punto a caso all'interno
# dell'area. Un passo dell'uomo è di un metro. La lunghezza del mattone è di un metro.
# Considerando tutte le condizioni a livello ideale, quante probabilità ci sono in percentuale
# che l'uomo inciampi sul mattone ?

# Risolvi l'enigma utilizzando python3.

print("Dati: \n Passo uomo = 1 m, per cui zona richiesta 1 m^2; \n l mattone = 1 m, per cui zona richiesta 1 m^2; \n Area C = 20 m^2; \n");
print("P[E] = Probabilità; P[E]% = Probabilità x 100 (%);");
print("P[E] = # Casi favorevoli / # casi possibili");

AreaTot = 20; # m^2
SpazioMinimoOccupatoUomo = 1; # m^2
SpazioMinimoOccupatoMattone = 1; # m^2

AreaDisponibile = (AreaTot - SpazioMinimoOccupatoMattone) - SpazioMinimoOccupatoUomo;

print("\n Zona massima occupata con gli spostamenti minimi prima di raggiungere la massima dimensione dell'area disponibile: \n");

for i in range(AreaDisponibile):
    print((i+1), " ");
    CardinalitaSpostamenti = (i+1);

print("\n Cardinalita': ", CardinalitaSpostamenti);

print("\n Casi favorevoli = Spostamenti possibili e ideali. Spostamento minimo = 1, Spostamenti massimi = ", AreaDisponibile);
print("\n Percui E = 2 (Spostamenti Min e Max)");
print("\n U = ", CardinalitaSpostamenti);

P_E_perc = (2 / AreaDisponibile) * 100;

print("\n Soluzione: P[E]% = [(E / U) * 100] % = ", P_E_perc, " % \n");
