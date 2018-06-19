---
title: volatile (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- volatile_cpp
dev_langs:
- C++
helpviewer_keywords:
- interrupt handlers and volatile keyword [C++]
- volatile keyword [C++]
- volatile objects
- objects [C++], volatile
ms.assetid: 81db4a85-ed5a-4a2c-9a53-5d07a771d2de
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 295654586a3fe251526a4764d54f80f3a70c7014
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32423957"
---
# <a name="volatile-c"></a>volatile (C++)
Qualificatore di tipo che è possibile utilizzare per dichiarare che un oggetto può essere modificato nel programma dall'hardware.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
volatile declarator ;  
```  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare il [/volatile](../build/reference/volatile-volatile-keyword-interpretation.md) opzione del compilatore per modificare la modalità con cui il compilatore interpreta questa parola chiave.  
  
 In Visual Studio la parola chiave `volatile` viene interpretata in modo diverso a seconda dell'architettura di destinazione. Per ARM, se non **/volatile** è specificata l'opzione del compilatore, il compilatore esegue come se **/volatile:iso** sono state specificate. Per le architetture diverse da ARM, se non **/volatile** è specificata l'opzione del compilatore, il compilatore esegue come se **/volatile: MS** sono stati specificati; pertanto, per le architetture diversa da ARM si consiglia è consigliabile che specifica **/volatile:iso**e utilizzare primitive esplicite di sincronizzazione e intrinseche al compilatore quando si utilizzano memoria condivisa tra thread.  
  
 È possibile utilizzare il qualificatore `volatile` per fornire l'accesso alle posizioni di memoria utilizzate dai processi asincroni come i gestori di interrupt.  
  
 Quando `volatile` viene utilizzato in una variabile che dispone anche di [Restrict](../cpp/extension-restrict.md) (parola chiave), `volatile` ha la precedenza.  
  
 Se un membro `struct` è contrassegnato come `volatile`, la parola chiave `volatile` viene propagata all'intera struttura. Se una struttura non ha una lunghezza che ne consente la copiata sull'architettura corrente tramite un'istruzione, la parola chiave `volatile` può essere completamente persa in tale struttura.  
  
 La parola chiave `volatile` potrebbe non avere alcun effetto su un campo se si verifica una delle condizioni seguenti:  
  
-   La lunghezza del campo relativo alla parola chiave volatile supera la dimensione massima che ne consente la copia nell'architettura corrente mediante un'istruzione.  
  
-   La lunghezza dell'elemento più esterno con parola chiave `struct` oppure di un membro di un oggetto `struct` eventualmente annidato supera la dimensione massima che ne consente la copia nell'architettura corrente mediante un'istruzione.  
  
 Sebbene il processore non riordini gli accessi non memorizzabili nella cache, le variabili non memorizzabili nella cache devono essere contrassegnate come `volatile` per garantire che il compilatore non riordini gli accessi alla memoria.  
  
 Gli oggetti che vengono dichiarati come `volatile` non sono utilizzati in determinate ottimizzazioni perché i valori possono cambiare in qualsiasi momento.  Il sistema legge sempre il valore corrente di un oggetto di tipo volatile, se richiesto, anche se un'istruzione precedente ha richiesto un valore dallo stesso oggetto.  Inoltre, il valore dell'oggetto viene scritto immediatamente nell'assegnazione.  
  
## <a name="iso-compliant"></a>Conformità ISO  
 Se si ha familiarità con c# parola chiave volatile o familiarità con il comportamento di `volatile` nelle versioni precedenti di Visual C++, tenere presente che C++ 11 Standard ISO `volatile` (parola chiave) è diversa ed è supportato in Visual Studio quando il [/ /volatile: iso](../build/reference/volatile-volatile-keyword-interpretation.md) è specificata l'opzione del compilatore. Per ARM, l'opzione è specificata per impostazione predefinita. La parola chiave `volatile` nel codice dello standard ISO di C++11 deve essere utilizzata solo per accessi hardware e non per la comunicazione tra thread. Per la comunicazione tra thread, utilizzare meccanismi come [std:: Atomic\<T >](../standard-library/atomic.md) dal [della libreria Standard C++](../standard-library/cpp-standard-library-reference.md).  
  
## <a name="end-of-iso-compliant"></a>Fine della conformità ISO  
  
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Quando il **/volatile: MS** viene utilizzata l'opzione del compilatore: per impostazione predefinita quando sono destinate le architetture diverse da ARM, il compilatore genera codice aggiuntivo per mantenere l'ordine tra i riferimenti agli oggetti di tipo volatile oltre a gestire ordine a riferimenti ad altri oggetti globali. In particolare:  
  
-   La scrittura in un oggetto di tipo volatile (nota anche come scrittura di tipo volatile) presenta una semantica di rilascio, ovvero un riferimento a un oggetto globale o statico che preceda una scrittura in un oggetto volatile nella sequenza di istruzioni si verificherà prima della scrittura di tipo volatile nel file binario compilato.  
  
-   Una lettura di un oggetto volatile (nota anche come lettura di tipo volatile) presenta una semantica di acquisizione, ovvero, un riferimento a un oggetto globale o statico che segua una lettura della memoria volatile nella sequenza di istruzioni verrà generato dopo la lettura di tipo volatile nel file binario compilato.  
  
 In questo modo gli oggetti di tipo volatile possono essere utilizzati per blocchi e rilasci di memoria in applicazioni multithreading.  
  
> [!NOTE]
>  Quando si basa sulla garanzia avanzata disponibile quando il **/volatile: MS** viene utilizzata l'opzione del compilatore, il codice non è portabile.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [const](../cpp/const-cpp.md)   
 [Puntatori const e volatile](../cpp/const-and-volatile-pointers.md)