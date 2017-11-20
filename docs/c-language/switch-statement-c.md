---
title: Istruzione switch (C) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: switch
dev_langs: C++
helpviewer_keywords: switch keyword [C]
ms.assetid: fbede014-23bd-4ab1-8094-c8d9d9cb963a
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: b66e9f40e3fb7f4c9a6c9f6fcb9bcd9c2a45fdd3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="switch-statement-c"></a>Istruzione switch (C)
Le istruzioni `switch` e **case** consentono di controllare le complesse operazioni condizionali e di diramazione. L'istruzione `switch` trasferisce il controllo a un'istruzione all'interno del corpo.  
  
## <a name="syntax"></a>Sintassi  
 *selection-statement*:  
 **switch (** *expression* **)** *statement*  
  
 *labeled-statement*:  
 **case**  *constant-expression*  **:**  *statement*  
  
 **default :**  *statement*  
  
 Il controllo passa all'istruzione di cui *constant-expression* **case** corrisponde al valore di **switch (** *expression* **)**. L'istruzione `switch` può contenere qualsiasi numero di istanze **case**, ma due costanti case nella stessa istruzione `switch` non possono avere lo stesso valore. L'esecuzione del corpo dell'istruzione inizia a partire dall'istruzione selezionata e continua fino alla fine del corpo o finché il controllo non viene trasferito fuori dal corpo tramite un'istruzione **break**.  
  
 L'utilizzo dell'istruzione `switch` in genere è simile alla seguente:  
  
 `switch` ( *expression* )  
  
 **{**  
  
 *declarations*  
  
 .  
  
 .  
  
 .  
  
 **case** *constant-expression* **:**  
  
 *istruzioni eseguite solo se l'espressione è uguale al*  
  
 *valore di questa constant-expression*  
  
 .  
  
 .  
  
 .  
  
 **break;**  
  
 **default :**  
  
 *istruzioni eseguite se l'espressione non è uguale a*  
  
 *qualsiasi constant-expression di case*  
  
 **}**  
  
 È possibile usare l'istruzione **break** per terminare l'elaborazione di una case particolare nell'istruzione `switch` e per creare un ramo alla fine dell'istruzione `switch`. Senza **break**, il programma continua alla case successiva, eseguendo le istruzioni fino a quando non viene raggiunto **break** o la fine dell'istruzione. In alcune situazioni, la continuazione può risultare utile.  
  
 L'istruzione **default** viene eseguita se nessuna *constant-expression* **case** è uguale al valore di **switch (** *expression* **)**. Se l'istruzione **default** viene omessa e non viene trovata nessuna corrispondenza **case**, non viene eseguita nessuna delle istruzioni nel corpo di `switch`. Può essere inclusa al massimo un'istruzione **default**. L'istruzione **default** non deve necessariamente essere alla fine; può essere inclusa in un punto qualsiasi del corpo dell'istruzione `switch`. Un'etichetta **case** o **default** può essere visualizzata solo in un'istruzione `switch`.  
  
 Il tipo di `switch` *expression* e di *constant-expression* **case** deve essere integrale. Il valore di ogni *constant-expression* **case** deve essere univoco all'interno del corpo dell'istruzione.  
  
 Le etichette **case** e **default** del corpo dell'istruzione `switch` sono significative solo nel test iniziale che determina il punto in cui inizia l'esecuzione nel corpo dell'istruzione. Le istruzioni switch possono essere annidate. Tutte le variabili statiche vengono inizializzate prima dell'esecuzione in qualsiasi istruzione `switch`.  
  
> [!NOTE]
>  Le dichiarazioni possono essere visualizzate all'inizio dell'istruzione composta che costituisce il corpo `switch`, ma le inizializzazioni incluse nelle dichiarazioni non vengono eseguite. L'istruzione `switch` trasferisce il controllo direttamente a un'istruzione eseguibile nel corpo, ignorando le righe che contengono inizializzazioni.  
  
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
  
 In questo esempio vengono eseguite tutte e tre le istruzioni del corpo di `switch` se `c` è uguale a `'A'` dal momento che un'istruzione **break** non viene inclusa prima della case seguente. Il controllo di esecuzione viene trasferito alla prima istruzione (`capa++;`) e procede in ordine nel resto del corpo. Se `c` è uguale a `'a'`, `lettera` e `total` vengono incrementati. Solo `total` viene incrementato se `c` non è uguale a `'A'` o `'a'`.  
  
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
  
 In questo esempio, un'istruzione **break** segue ogni istruzione del corpo di `switch`. L'istruzione **break** forza un'uscita dal corpo dell'istruzione dopo che viene eseguita un'istruzione. Se `i` è ugual a -1, solo `n` viene incrementato. L'istruzione **break** che segue l'istruzione `n++;` forza l'uscita del controllo di esecuzione dal corpo dell'istruzione, ignorando le istruzioni rimanenti. Analogamente, se `i` è uguale a 0, solo `z` viene incrementato; se `i` è uguale a 1, solo `p` viene incrementato. L'istruzione **break** finale non è strettamente necessaria, poiché il controllo esce dal corpo alla fine dell'istruzione composta, ma è incluso per coerenza.  
  
 Una singola istruzione può contenere più etichette **case**, come illustrato nell'esempio seguente:  
  
```  
case 'a' :  
case 'b' :  
case 'c' :  
case 'd' :  
case 'e' :  
case 'f' :  hexcvt(c);  
```  
  
 In questo esempio, se *constant-expression* è uguale a qualsiasi lettera tra `'a'` e `'f'`, viene chiamata la funzione `hexcvt`.  
  
 **Sezione specifica Microsoft**  
  
 Microsoft C non limita il numero di valori di etichette case che possono essere presenti in un'istruzione `switch`. Tale numero è limitato solo dalla memoria disponibile. ANSI C richiede che in un'istruzione `switch` siano consentite almeno 257 etichette case.  
  
 Per impostazione predefinita, in Microsoft C le estensioni Microsoft sono abilitate. Utilizzare l'opzione del compilatore /Za per disabilitare queste estensioni.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzione switch (C++)](../cpp/switch-statement-cpp.md)