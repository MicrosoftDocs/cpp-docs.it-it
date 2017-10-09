---
title: Definizione di funzioni inline C con dllexport e dllimport | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- inline functions [C++], with dllexport and dllimport
- dllimport attribute [C++], inline functions
- dllexport attribute [C++], inline functions
- dllexport attribute [C++]
ms.assetid: 41418f7c-1c11-470b-bb2e-1f8269a239f0
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 77776e174b797bd323aff0a77a2f914b8ac0b0ff
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="defining-inline-c-functions-with-dllexport-and-dllimport"></a>Definizione di funzioni inline C con dllexport e dllimport
**Sezione specifica Microsoft**  
  
 È possibile definire come inline una funzione con l'attributo `dllexport`. In questo caso, sempre creata ed esportata un'istanza della funzione, indipendentemente dal fatto che il modulo nel programma faccia riferimento alla funzione. Si presuppone che la funzione venga importata da un altro programma.  
  
 È anche possibile definire come inline una funzione dichiarata con l'attributo **dllimport**. In questo caso, è possibile espandere la funzione (conformemente alle specifiche di opzione del compilatore /Ob inline), ma non può essere mai creata un'istanza. In particolare, se viene preso in considerazione l'indirizzo di una funzione inline importata, viene restituito l'indirizzo della funzione contenuta nella DLL. Questo comportamento corrisponde a recuperare l'indirizzo di una funzione importata non inline.  
  
 I dati e le stringhe locali statici nelle funzioni inline mantengono le stesse identità tra DLL e il client come in un programma singolo (ovvero, un file eseguibile senza un'interfaccia DLL).  
  
 Fare attenzione quando si forniscono funzioni inline importate. Ad esempio, se si aggiorna la DLL, non presupporre che il client utilizzerà la versione modificata della DLL. Per assicurarsi che si stia caricando la versione corretta della DLL, ricompilare anche il client della DLL.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni di importazione ed esportazione di DLL](../c-language/dll-import-and-export-functions.md)
