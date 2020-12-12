---
description: 'Altre informazioni su: errori del compilatore C2000 tramite C2099'
title: Errori del compilatore da C2000 a C2099
ms.date: 04/21/2019
f1_keywords:
- C2000
- C2016
- C2023
- C2024
- C2025
- C2029
- C2031
- C2035
- C2037
- C2038
- C2049
- C2068
- C2076
- C2080
- C2096
- C2098
helpviewer_keywords:
- C2000
- C2016
- C2023
- C2024
- C2025
- C2029
- C2031
- C2035
- C2037
- C2038
- C2049
- C2068
- C2076
- C2080
- C2096
- C2098
ms.assetid: d99a19eb-eeeb-4181-9b33-9cbe4459767b
ms.openlocfilehash: 4bdd76018c348e4d5f09c8a7a2e92395fd2faec8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319014"
---
# <a name="compiler-errors-c2000-through-c2099"></a>Errori del compilatore da C2000 a C2099

Negli articoli di questa sezione della documentazione viene illustrato un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Errore|Message|
|-----------|-------------|
|Errore del compilatore C2000|ERRORE sconosciuto per ulteriori informazioni, scegliere supporto tecnico dal menu? di Visual C++ o aprire il file della Guida relativo al supporto tecnico|
|[Errore del compilatore C2001](compiler-error-c2001.md)|nuova riga nella costante|
|[Errore del compilatore C2002](compiler-error-c2002.md)|costante carattere "wide" non valida|
|[Errore del compilatore C2003](compiler-error-c2003.md)|previsto ' defined ID '|
|[Errore del compilatore C2004](compiler-error-c2004.md)|previsto 'defined(id)'|
|[Errore del compilatore C2005](compiler-error-c2005.md)|#line previsto un numero di riga. trovato '*token*'|
|[Errore del compilatore C2006](compiler-error-c2006.md)|'*Directive*': previsto un nome file. trovato '*token*'|
|[Errore del compilatore C2007](compiler-error-c2007.md)|sintassi #define|
|[Errore del compilatore C2008](compiler-error-c2008.md)|'*character*': imprevisto nella definizione di macro|
|[Errore del compilatore C2009](compiler-error-c2009.md)|riutilizzo di '*Identifier*' formale della macro|
|[Errore del compilatore C2010](compiler-error-c2010.md)|'*character*': imprevisto nell'elenco di parametri formali della macro|
|[Errore del compilatore C2011](compiler-error-c2011.md)|'*Identifier*': ridefinizione del tipo '*Type*'|
|[Errore del compilatore C2012](compiler-error-c2012.md)|nome mancante dopo ' <'|
|[Errore del compilatore C2013](compiler-error-c2013.md)|'>' mancante|
|[Errore del compilatore C2014](compiler-error-c2014.md)|il comando per il preprocessore deve iniziare come primo spazio non vuoto|
|[Errore del compilatore C2015](compiler-error-c2015.md)|troppi caratteri nella costante|
|Errore del compilatore C2016|C richiede che uno struct o un'Unione includa almeno un membro|
|[Errore del compilatore C2017](compiler-error-c2017.md)|sequenza di escape non valida|
|[Errore del compilatore C2018](compiler-error-c2018.md)|il carattere ' 0x *value*' è sconosciuto|
|[Errore del compilatore C2019](compiler-error-c2019.md)|prevista direttiva per il preprocessore. trovato '*character*'|
|[Errore del compilatore C2020](compiler-error-c2020.md)|'*member*': ridefinizione membro '*Class*'|
|[Errore del compilatore C2021](compiler-error-c2021.md)|previsto valore esponente, non '*character*'|
|[Errore del compilatore C2022](compiler-error-c2022.md)|'*Number*': troppo grande per il carattere|
|Errore del compilatore C2023|'*Identifier*': allineamento (*number1*) diverso dalla dichiarazione precedente (*number2*)|
|Errore del compilatore C2024|l'attributo ' aligns ' si applica solo a variabili, membri dati e tipi di tag|
|Errore del compilatore C2025|file di interfaccia del modulo binario non valido o danneggiato:'*filename*'|
|[Errore del compilatore C2026](compiler-error-c2026.md)|stringa troppo grande, caratteri finali troncati|
|[Errore del compilatore C2027](compiler-error-c2027.md)|uso del tipo non definito '*Type*'|
|[Errore del compilatore C2028](compiler-error-c2028.md)|un membro di struttura/unione deve trovarsi all'interno di una struttura/unione|
|Errore del compilatore C2029|Left of '*token*' specifica una classe/struct/interfaccia '*Identifier*' non definita|
|[Errore del compilatore C2030](compiler-error-c2030.md)|un distruttore con accessibilità 'protected private' non può essere membro di una classe dichiarata 'sealed'|
|Errore del compilatore C2031|un distruttore virtuale con accessibilità'*Accessibility*' non è consentito per questo tipo|
|[Errore del compilatore C2032](compiler-error-c2032.md)|'*Identifier*': la funzione non può essere membro di struct/union '*Type*'|
|[Errore del compilatore C2033](compiler-error-c2033.md)|'*Identifier*': il campo di bit non può avere riferimenti indiretti|
|[Errore del compilatore C2034](compiler-error-c2034.md)|'*Identifier*': tipo di campo di bit troppo piccolo per numero di bit|
|Errore del compilatore C2035|un distruttore non virtuale con accessibilità'*Accessibility*' non è consentito per questo tipo|
|[Errore del compilatore C2036](compiler-error-c2036.md)|'*Identifier*': dimensioni sconosciute|
|Errore del compilatore C2037|Left di '*Identifier*' specifica un *tipo* struct/Union non definito|
|Errore del compilatore C2038|lo spazio dei nomi STD non può essere inline|
|[Errore del compilatore C2039](compiler-error-c2039.md)|'*identificatore1*': non è un membro di '*identifier2*'|
|[Errore del compilatore C2040](compiler-error-c2040.md)|'*operator*':'*identificatore1*' differisce da'*identifier2*' nei livelli di riferimento indiretto|
|[Errore del compilatore C2041](compiler-error-c2041.md)|cifra '*character*' non valida per '*Number*' di base|
|[Errore del compilatore C2042](compiler-error-c2042.md)|le parole chiave signed/unsigned si escludono a vicenda|
|[Errore del compilatore C2043](compiler-error-c2043.md)|break non valido|
|[Errore del compilatore C2044](compiler-error-c2044.md)|continue non valido|
|[Errore del compilatore C2045](compiler-error-c2045.md)|'*Identifier*': etichetta ridefinita|
|[Errore del compilatore C2046](compiler-error-c2046.md)|case non valido|
|[Errore del compilatore C2047](compiler-error-c2047.md)|default non valido|
|[Errore del compilatore C2048](compiler-error-c2048.md)|più di un valore predefinito|
|Errore del compilatore C2049|'*Identifier*': lo spazio dei nomi non inline non può essere riaperto come inline|
|[Errore del compilatore C2050](compiler-error-c2050.md)|espressione switch non integrale|
|[Errore del compilatore C2051](compiler-error-c2051.md)|espressione case non costante|
|[Errore del compilatore C2052](compiler-error-c2052.md)|'*Type*': tipo non valido per l'espressione case|
|[Errore del compilatore C2053](compiler-error-c2053.md)|'*Identifier*': mancata corrispondenza di stringhe wide|
|[Errore del compilatore C2054](compiler-error-c2054.md)|previsto ' (' per seguire '*Identifier*'|
|[Errore del compilatore C2055](compiler-error-c2055.md)|è previsto un elenco di parametri formali, non un elenco di tipi|
|[Errore del compilatore C2056](compiler-error-c2056.md)|espressione non valida|
|[Errore del compilatore C2057](compiler-error-c2057.md)|prevista espressione costante|
|[Errore del compilatore C2058](compiler-error-c2058.md)|espressione costante non integrale|
|[Errore del compilatore C2059](compiler-error-c2059.md)|errore di sintassi:'*token*'|
|[Errore del compilatore C2060](compiler-error-c2060.md)|errore di sintassi: trovata fine del file|
|[Errore del compilatore C2061](compiler-error-c2061.md)|errore di sintassi: identificatore '*Identifier*'|
|[Errore del compilatore C2062](compiler-error-c2062.md)|tipo '*Type*' imprevisto|
|[Errore del compilatore C2063](compiler-error-c2063.md)|'*Identifier*': non è una funzione|
|[Errore del compilatore C2064](compiler-error-c2064.md)|il termine non restituisce una funzione che accetta argomenti *numerici*|
|[Errore del compilatore C2065](compiler-error-c2065.md)|'*Identifier*': identificatore non dichiarato|
|[Errore del compilatore C2066](compiler-error-c2066.md)|cast a tipo funzione non valido|
|[Errore del compilatore C2067](compiler-error-c2067.md)|cast a tipo matrice non valido|
|Errore del compilatore C2068|utilizzo non valido della funzione in overload. Elenco di argomenti mancanti?|
|[Errore del compilatore C2069](compiler-error-c2069.md)|cast del termine 'void' in non 'void'|
|[Errore del compilatore C2070](compiler-error-c2070.md)|'*Type*': operando sizeof non valido|
|[Errore del compilatore C2071](compiler-error-c2071.md)|'*Identifier*': classe di archiviazione non valida|
|[Errore del compilatore C2072](compiler-error-c2072.md)|'*Identifier*': inizializzazione di una funzione|
|[Errore del compilatore C2073](compiler-error-c2073.md)|'*Identifier*': gli elementi della matrice parzialmente inizializzata devono avere un costruttore predefinito|
|[Errore del compilatore C2074](compiler-error-c2074.md)|'*Identifier*': l'inizializzazione di '*Type*' richiede un elenco di inizializzatori racchiusi tra parentesi graffe|
|[Errore del compilatore C2075](compiler-error-c2075.md)|'*Identifier*': l'inizializzazione della matrice richiede un elenco di inizializzatori racchiusi tra parentesi|
|Errore del compilatore C2076|non è possibile usare un elenco di inizializzatori racchiusi tra parentesi in una nuova espressione il cui tipo contiene '*Type*'|
|[Errore del compilatore C2077](compiler-error-c2077.md)|inizializzatore di campo non scalare '*Identifier*'|
|[Errore del compilatore C2078](compiler-error-c2078.md)|troppi inizializzatori|
|[Errore del compilatore C2079](compiler-error-c2079.md)|'*Identifier*' utilizza struct/classe/Unione '*Type*' non definito|
|Errore del compilatore C2080|'*Identifier*': il tipo per '*Type*' può essere dedotto solo da una singola espressione dell'inizializzatore|
|[Errore del compilatore C2081](compiler-error-c2081.md)|'*Identifier*': nome non valido nell'elenco di parametri formali|
|[Errore del compilatore C2082](compiler-error-c2082.md)|ridefinizione del parametro formale '*Identifier*'|
|[Errore del compilatore C2083](compiler-error-c2083.md)|confronto struct/union non valido|
|[Errore del compilatore C2084](compiler-error-c2084.md)|la funzione '*Identifier*' ha già un corpo|
|[Errore del compilatore C2085](compiler-error-c2085.md)|'*Identifier*': non nell'elenco di parametri formali|
|[Errore del compilatore C2086](compiler-error-c2086.md)|'*Identifier*': ridefinizione|
|[Errore del compilatore C2087](compiler-error-c2087.md)|'*Identifier*': indice mancante|
|[Errore del compilatore C2088](compiler-error-c2088.md)|'*operator*': non valido per struct/classe/Union|
|[Errore del compilatore C2089](compiler-error-c2089.md)|'*Identifier*':'*Type*' troppo grande|
|[Errore del compilatore C2090](compiler-error-c2090.md)|la funzione restituisce una matrice|
|[Errore del compilatore C2091](compiler-error-c2091.md)|funzione restituisce una funzione|
|[Errore del compilatore C2092](compiler-error-c2092.md)|il tipo di elemento di matrice '*Identifier*' non può essere una funzione|
|[Errore del compilatore C2093](compiler-error-c2093.md)|'*identificatore1*': non può essere inizializzato con l'indirizzo della variabile automatica '*identifier2*'|
|[Errore del compilatore C2094](compiler-error-c2094.md)|etichetta '*Identifier*' non definita|
|[Errore del compilatore C2095](compiler-error-c2095.md)|'*Function*': il parametro effettivo è di tipo ' void ': parametro *Number*|
|Errore del compilatore C2096|'*Identifier*': Impossibile inizializzare un membro dati con un inizializzatore tra parentesi|
|[Errore del compilatore C2097](compiler-error-c2097.md)|inizializzazione non valida|
|Errore del compilatore C2098|token imprevisto dopo il membro dati '*Identifier*'|
|[Errore del compilatore C2099](compiler-error-c2099.md)|l'inizializzatore non è una costante|

## <a name="see-also"></a>Vedi anche

[Errori e avvisi degli strumenti di compilazione e compilatore C/C++](../compiler-errors-1/c-cpp-build-errors.md) \
[Errori del compilatore da C2000 a C3999](../compiler-errors-1/compiler-errors-c2000-c3999.md)
