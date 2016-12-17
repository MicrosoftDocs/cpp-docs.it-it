---
title: "volatile (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "volatile_cpp"
  - "volatile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestori di interrupt e parola chiave volatile"
  - "oggetti [C++], volatile"
  - "volatile (parola chiave) [C++]"
  - "oggetti volatili"
ms.assetid: 81db4a85-ed5a-4a2c-9a53-5d07a771d2de
caps.latest.revision: 43
caps.handback.revision: 43
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# volatile (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un qualificatore di tipo che è possibile utilizzare per dichiarare che un oggetto può essere modificato nel programma dall'hardware.  
  
## Sintassi  
  
```  
  
volatile declarator ;  
```  
  
## Note  
 È possibile utilizzare l'opzione del compilatore [\/volatile](../build/reference/volatile-volatile-keyword-interpretation.md) per modificare il modo in cui il compilatore interpreta questa parola chiave.  
  
 Visual Studio interpreta la parola chiave `volatile` in modo diverso a seconda dell'architettura di destinazione.  Per ARM, se nessuna opzione del compilatore **\/volatile** è specificata, il compilatore si comporta come se **\/volatile:iso** fosse specificata.  Per le architetture diverse da ARM, se nessuna opzione **\/volatile** del compilatore è specificata, il compilatore si comporta come se **\/volatile:ms** fosse specificata; pertanto, su architetture diverse da ARM si consiglia vivamente di specificare **\/volatile:iso** e di utilizzare primitive esplicite di sincronizzazione e intrinseche al compilatore quando si ha a che fare con memoria condivisa fra thread.  
  
 È possibile utilizzare il qualificatore `volatile` per fornire l'accesso alle locazioni di memoria utilizzate dai processi asincroni come i gestori di interrupt.  
  
 Quando `volatile` viene utilizzata su una variabile che ha la parola chiave [\_\_restrict](../cpp/extension-restrict.md), `volatile` ha la precedenza.  
  
 Se un membro `struct` è contrassegnato come `volatile`, `volatile` viene propagato all'intera struttura.  Se una struttura non ha una lunghezza che possa essere copiata sull'architettura corrente con una istruzione, `volatile` può essere completamente persa su tale struttura.  
  
 La parola chiave `volatile` potrebbe non avere effetto su un campo se una delle seguenti condizioni si verificasse:  
  
-   La lunghezza del campo volatile supera la dimensione massima che può essere copiata nell'architettura corrente mediante un'istruzione.  
  
-   La lunghezza della `struct` più esterna—oppure se è un membro di una `struct` eventualmente annidata— supera la dimensione massima che può essere copiata nell'architettura corrente mediante una istruzione.  
  
 Sebbene il processore non riordini gli accessi alla memoria un\-cacheable, le variabili un\-cacheable devono essere contrassegnate come `volatile` per garantire che il compilatore non riordini gli accessi alla memoria.  
  
 Oggetti che vengono dichiarati come `volatile` non sono utilizzati in determinate ottimizzazioni perché i valori possono cambiare in qualsiasi momento.  Il sistema legge sempre il valore corrente di un oggetto volatile se richiesto, anche se un'istruzione precedente ha richiesto un valore dallo stesso oggetto.  Inoltre, il valore dell'oggetto viene scritto immediatamente nell'assegnamento.  
  
## Conformità ISO  
 Se si ha dimestichezza con la parola chiave [Volatile c\#](../Topic/volatile%20\(C%23%20Reference\).md), o familiarità con il comportamento `volatile` nelle versioni precedenti di Visual C\+\+, tenere presente che la parola chiave `volatile` dello standard ISO di C\+\+11 è diversa ed è supportata in Visual Studio quando l'opzione del compilatore [\/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) è specificata. \(Per ARM, specificata per impostazione predefinita\).  La parola chiave `volatile` nel codice dello standard ISO di C\+\+11 deve essere utilizzata solo per accessi hardware; da non utilizzare per la comunicazione fra thread.  Per la comunicazione fra thread, fare uso di meccanismi come [std::atomic\<T\>](../standard-library/atomic.md) da [Libreria di modelli standard di C\+\+](../standard-library/cpp-standard-library-reference.md).  
  
## Fine della Conformità ISO  
  
## Specifici di Microsoft  
 Quando l'opzione del compilatore **\/volatile:ms** viene usata—per impostazione predefinita quando l'architettura target è diversa da ARM— il compilatore genera codice aggiuntivo per mantenere l'ordine tra i riferimenti agli oggetti volatili oltre a gestire l'ordine a riferimenti ad altri oggetti globali.  In particolare:  
  
-   La scrittura verso un oggetto volatile \(anche noto come volatile write\) presenta semantica Release; ovvero, un riferimento a un oggetto globale o statico che si verifica prima di una scrittura verso un oggetto volatile nella sequenza di istruzione si verificherà prima della volatile write nel binario compilato.  
  
-   Una lettura di un oggetto volatile \(anche noto come volatile read\) dispone di semantica Acquire; ovvero, un riferimento a un oggetto globale o statico che si verifica dopo la lettura della memoria volatile nella sequenza d'istruzione verrà generato dopo la volatile read nel binario compilato.  
  
 In questo modo gli oggetti volatili possono essere utilizzati per lock e release della memoria in applicazioni multithreading.  
  
> [!NOTE]
>  Quando si basa sulla garanzia avanzata che è resa disponibile quando è usata l'opzione **\/volatile:ms** del compilatore, il codice potrebbe non essere portabile.  
  
## Specifica END Microsoft  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [const](../cpp/const-cpp.md)   
 [Puntatori const e volatile](../cpp/const-and-volatile-pointers.md)