---
title: Considerazioni di avvio aggiuntive | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- program startup [C++]
- startup code
- initializing before main
ms.assetid: 0e942aa6-8342-447c-b068-8980ed7622bd
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: cb437729d2c60f15bc798438ecbbba0637bf3d22
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="additional-startup-considerations"></a>Considerazioni di avvio aggiuntive
In C++ la costruzione e la distruzione di un oggetto possono richiedere l'esecuzione di codice utente. Pertanto, è importante comprendere le inizializzazioni eseguite prima della voce **principale** e i distruttori richiamati dopo l'uscita da **principale**. (Per informazioni dettagliate sulla costruzione e distruzione di oggetti, vedere [costruttori](../cpp/constructors-cpp.md) e [distruttori](../cpp/destructors-cpp.md).)  
  
 Le inizializzazioni seguenti vengono eseguite prima della voce **principale**:  
  
-   Inizializzazione predefinita dei dati statici a zero. Tutti i dati statici senza inizializzatori espliciti vengono impostati su zero prima dell'esecuzione di qualsiasi altro codice, inclusa l'inizializzazione di runtime. I membri dati statici devono ancora essere definiti in modo esplicito.  
  
-   Inizializzazione di oggetti statici globali in un'unità di conversione. Questo problema può verificarsi uno prima della voce **principale** o prima del primo utilizzo di qualsiasi oggetto in unità di conversione dell'oggetto o funzione.  
  
 **Sezione specifica Microsoft**  
  
 In Microsoft C++, gli oggetti statici globali vengono inizializzati prima della voce **principale**.  
  
 **Fine sezione specifica Microsoft**  
  
 Gli oggetti statici globali reciprocamente interdipendenti, ma presenti in unità di conversione diverse, possono causare un comportamento non corretto.  
  
## <a name="see-also"></a>Vedere anche  
 [Avvio e terminazione](../cpp/startup-and-termination-cpp.md)
