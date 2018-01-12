---
title: Il collegamento alla libreria CRT in ATL progetto | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- DllMainCRTStartup
- wWinMainCRTStartup
- WinMainCRTStartup
dev_langs: C++
helpviewer_keywords:
- CRT, linking with ATL
- WinMainCRTStartup method
- DllMainCRTStartup method
- wWinMainCRTStartup method
- ATL, C Run-Time library (CRT)
ms.assetid: 650957ae-362c-4ecf-8b03-5d49138e8b5b
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 631426fece3960303d67d8929e99c404beaab998
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linking-to-the-crt-in-your-atl-project"></a>Collegamento a CRT nel progetto ATL
Il [C Run-Time Libraries](../c-runtime-library/crt-library-features.md) (CRT) offrono numerose funzioni utili che possono semplificare la programmazione durante lo sviluppo di ATL. Tutti i progetti ATL collegano alla libreria CRT. È possibile visualizzare i vantaggi e svantaggi del metodo di collegamento [vantaggi e gli svantaggi del metodo utilizzato per collegare la libreria CRT](../atl/benefits-and-tradeoffs-of-the-method-used-to-link-to-the-crt.md).  
  
## <a name="effects-of-linking-to-the-crt-on-your-program-image"></a>Effetti del collegamento alla libreria CRT sull'immagine del programma  
 Collegamento statico alla libreria CRT, codice CRT viene inserito nell'immagine eseguibile e non è necessario disporre della DLL CRT presente in un sistema per l'esecuzione di un'immagine. Se si collega dinamicamente a CRT, i riferimenti al codice nella DLL CRT vengono inseriti in un'immagine, ma non il codice stesso. Affinché l'immagine per l'esecuzione in un dato sistema, la DLL CRT deve essere presente in tale sistema. Anche in caso di collegamento dinamico alla libreria CRT, è possibile che il codice può essere collegato staticamente (ad esempio, **DllMainCRTStartup**).  
  
 Quando si collega un'immagine, in modo esplicito o implicito specificare un punto di ingresso che il sistema operativo chiamerà dopo il caricamento dell'immagine. Per una DLL, è il punto di ingresso predefinito **DllMainCRTStartup**. Per un file EXE, è **WinMainCRTStartup**. È possibile ignorare l'impostazione predefinita con l'opzione del linker /ENTRY. CRT fornisce un'implementazione per **DllMainCRTStartup**, **WinMainCRTStartup**, e **wWinMainCRTStartup** (il punto di ingresso Unicode per un file EXE). Questi punti di ingresso fornito CRT chiamano costruttori sugli oggetti globali e inizializzare altre strutture di dati utilizzati da alcune funzioni CRT. Se è collegato in modo statico, questo codice di avvio aggiunge circa 25K all'immagine. Se è collegato in modo dinamico, la maggior parte del codice è nella DLL, le dimensioni dell'immagine rimangono piccola.  
  
 Per ulteriori informazioni, vedere l'argomento del linker [/ENTRY (simbolo del punto di ingresso)](../build/reference/entry-entry-point-symbol.md).  
  
## <a name="optimization-options"></a>Opzioni di ottimizzazione  
 Utilizzando l'opzione del linker /OPT: NOWIN98 può ridurre ulteriormente un controllo ATL predefinito di 10 K, a scapito di aumento del tempo nei sistemi Windows 98 di caricamento. Per ulteriori informazioni sulle opzioni di collegamento, vedere [/OPT (ottimizzazioni)](../build/reference/opt-optimizations.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione con codice di runtime C e ATL](../atl/programming-with-atl-and-c-run-time-code.md)   
 [DLL e comportamento delle librerie di runtime Visual C++](../build/run-time-library-behavior.md)

