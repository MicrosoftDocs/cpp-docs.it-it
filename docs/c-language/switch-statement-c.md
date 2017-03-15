---
title: "Istruzione switch (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "switch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "switch (parola chiave) [C]"
ms.assetid: fbede014-23bd-4ab1-8094-c8d9d9cb963a
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Istruzione switch (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le istruzioni **case** e `switch` consentono di controllare le complesse operazioni condizionali e di branching.  L'istruzione `switch` trasferisce il controllo a un'istruzione all'interno del corpo.  
  
## Sintassi  
 *selection\-statement*:  
 **switch \(** *expression* **\)** *statement*  
  
 *labeled\-statement*:  
 **case**  *constant\-expression*  **:**  *statement*  
  
 **default :**  *statement*  
  
 Il controllo passa all'istruzione con **case** *constant\-expression* corrispondente al valore di **switch \(** *expression* **\)**.  L'istruzione `switch` può contenere qualsiasi numero di istanze **case**, ma due costanti case nella stessa istruzione `switch` non possono avere lo stesso valore.  L'esecuzione del corpo di istruzione inizia a partire dall'istruzione selezionata e continua fino alla fine del corpo o finché il controllo non viene trasferito al di fuori del corpo tramite un'istruzione **break**.  
  
 L'utilizzo dell'istruzione `switch` in genere è simile alla seguente:  
  
 `switch` \( *expression* \)  
  
 **{**  
  
 *dichiarazioni*  
  
 .  
  
 .  
  
 .  
  
 **case** *constant\-expression* **:**  
  
 *istruzioni eseguite se l'espressione è uguale a*  
  
 *valore di questa espressione costante*  
  
 .  
  
 .  
  
 .  
  
 **break;**  
  
 **predefinito:**  
  
 *istruzioni eseguite se l'espressione non è uguale a*  
  
 *qualsiasi case espressione costante*  
  
 **}**  
  
 È possibile utilizzare l'istruzione **break** per terminare l'elaborazione di un caso particolare nell'istruzione `switch` e per eseguire il branching alla fine dell'istruzione `switch`.  Senza **break**, il programma continua al caso successivo, eseguendo le istruzioni fino a che **break** o la fine dell'istruzione vengono raggiunti.  In alcune situazioni, la continuazione può risultare utile.  
  
 L'istruzione **default** viene eseguita se **case** *constant\-expression* è uguale al valore di **switch \(** *expression* **\)**.  Se l'istruzione **default** viene omessa e nessuna corrispondenza **case** viene trovata, non viene eseguita nessuna delle istruzioni nel corpo di `switch`.  Potrebbe contenere al massimo un'istruzione **default**.  L'istruzione **default** non deve necessariamente essere alla fine; può essere visualizzata in un punto qualsiasi del corpo dell'istruzione `switch`.  Un'etichetta **case** o **default** può essere visualizzata solo in un'istruzione `switch`.  
  
 Il tipo di `switch` *expression* e **case** *constant\-expression* deve essere integrale.  Il valore di ogni **case** *constant\-expression* deve essere univoco all'interno del corpo dell'istruzione.  
  
 Le etichette **default** e **case** del corpo dell'istruzione `switch` sono significative solo nel test iniziale che determina il punto in cui inizia l'esecuzione nel corpo dell'istruzione.  Le istruzioni switch possono essere annidate.  Tutte le variabili statiche vengono inizializzate prima dell'esecuzione in qualsiasi istruzione `switch`.  
  
> [!NOTE]
>  Le dichiarazioni possono essere visualizzate all'inizio dell'istruzione composta che costituisce il corpo `switch`, ma le inizializzazioni incluse nelle dichiarazioni non vengono eseguite.  L'istruzione `switch` trasferisce il controllo direttamente a un'istruzione eseguibile nel corpo, ignorando le righe che contengono inizializzazioni.  
  
 Gli esempi seguenti illustrano le istruzioni `switch`:  
  
```  
switch( c )   
{  
    case 'A':  
        capa++;  
    case 'a':  
        lettera++;  
    default :  
        total++;  
}  
```  
  
 Tutte e tre le istruzioni del corpo `switch` in questo esempio vengono eseguite se `c` è uguale a `'A'` dal momento che un'istruzione **break** non viene visualizzata prima del caso seguente.  Il controllo di esecuzione viene trasferito alla prima istruzione \(`capa++;`\) e procede in ordine nel resto del corpo.  Se `c` è uguale a `'a'`, `lettera` e `total` vengono incrementati.  Solo `total` viene incrementato se `c` non è uguale a `'A'` o `'a'`.  
  
```  
switch( i )   
{  
    case -1:  
        n++;  
        break;  
    case 0 :  
        z++;  
        break;  
    case 1 :  
        p++;  
        break;  
}  
```  
  
 In questo esempio, un'istruzione **break** segue ogni istruzione del corpo `switch`.  L'istruzione **break** forza un'uscita dal corpo dell'istruzione dopo che viene eseguita un'istruzione.  Se `i` è ugual a –1, solo `n` viene incrementato.  **break** che segue l'istruzione `n++;` determina l'uscita del controllo di esecuzione dal corpo dell'istruzione, ignorando le istruzioni rimanenti.  Analogamente, se `i` è uguale a 0, solo `z` viene incrementato; se `i` è uguale a 1, solo `p` viene incrementato.  L'istruzione **break** finale non è strettamente necessaria, poiché il controllo esce dal corpo alla fine dell'istruzione composta, ma è incluso per coerenza.  
  
 Una singola istruzione può contenere più etichette **case**, come illustrato nel seguente esempio:  
  
```  
case 'a' :  
case 'b' :  
case 'c' :  
case 'd' :  
case 'e' :  
case 'f' :  hexcvt(c);  
```  
  
 In questo esempio, se *constant\-expression* è uguale a qualsiasi lettera tra `'a'` e `'f'`, viene chiamata la funzione `hexcvt`.  
  
 **Sezione specifica Microsoft**  
  
 Microsoft C non limita il numero di valori di etichette case che possono essere presenti in un'istruzione `switch`.  Tale numero è limitato solo dalla memoria disponibile.  ANSI C richiede che in un'istruzione `switch` siano consentite almeno 257 etichette case.  
  
 Per impostazione predefinita, in Microsoft C le estensioni Microsoft sono abilitate.  Utilizzare l'opzione del compilatore \/Za per disabilitare queste estensioni.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Istruzione switch \(C\+\+\)](../cpp/switch-statement-cpp.md)