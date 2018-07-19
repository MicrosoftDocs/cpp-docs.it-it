---
title: Collegamento a CRT nel progetto ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- DllMainCRTStartup
- wWinMainCRTStartup
- WinMainCRTStartup
dev_langs:
- C++
helpviewer_keywords:
- CRT, linking with ATL
- WinMainCRTStartup method
- DllMainCRTStartup method
- wWinMainCRTStartup method
- ATL, C Run-Time library (CRT)
ms.assetid: 650957ae-362c-4ecf-8b03-5d49138e8b5b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fad8209c680a782bd9800215e1e0affc7e2a98c8
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37852497"
---
# <a name="linking-to-the-crt-in-your-atl-project"></a>Collegamento a CRT nel progetto ATL
Il [librerie di runtime C](../c-runtime-library/crt-library-features.md) (CRT) offrono molte funzionalità utili che possono semplificare la programmazione durante lo sviluppo di ATL. Tutti i progetti ATL link alla libreria CRT. È possibile visualizzare i vantaggi e svantaggi del metodo di collegamento [vantaggi e compromessi del metodo usato per collegarsi a CRT](../atl/benefits-and-tradeoffs-of-the-method-used-to-link-to-the-crt.md).  
  
## <a name="effects-of-linking-to-the-crt-on-your-program-image"></a>Effetti del collegamento a CRT sull'immagine del programma  
 Se si collega in modo statico a CRT, il codice da CRT è inserito nell'immagine eseguibile e non è necessario disporre della DLL CRT in un sistema per l'esecuzione dell'immagine. Se si collegano dinamicamente a CRT, i riferimenti al codice nella DLL CRT vengono inseriti nell'immagine, ma non il codice stesso. Affinché l'immagine da eseguire su un determinato sistema, la DLL CRT deve essere presente in tale sistema. Anche quando collegamento dinamico alla libreria CRT, è probabile che il codice può essere collegato staticamente (ad esempio, `DllMainCRTStartup`).  
  
 Quando si collega l'immagine, in modo implicito o esplicito specificare un punto di ingresso che verrà chiamato dal sistema operativo in dopo il caricamento dell'immagine. Per una DLL, è il punto di ingresso predefinito `DllMainCRTStartup`. Per un file EXE, è `WinMainCRTStartup`. È possibile sostituire l'impostazione predefinita con l'opzione del linker /ENTRY. CRT fornisce un'implementazione `DllMainCRTStartup`, `WinMainCRTStartup`, e `wWinMainCRTStartup` (punto di ingresso di Unicode per un file EXE). Questi punti di ingresso fornita da CRT chiamano i costruttori per gli oggetti globali e inizializzare altre strutture di dati usati da alcune funzioni CRT. Questo codice di avvio aggiunge circa 25K nell'immagine se è collegato in modo statico. Se è collegato in modo dinamico, la maggior parte del codice è nella DLL, in modo che le dimensioni dell'immagine rimangono piccola.  
  
 Per altre informazioni, vedere l'argomento del linker [/ENTRY (simbolo del punto di ingresso)](../build/reference/entry-entry-point-symbol.md).  
  
## <a name="optimization-options"></a>Opzioni di ottimizzazione  
 Usando l'opzione del linker/OPT:NOWIN98 può ridurre ulteriormente un controllo ATL predefinito di 10 K, a scapito di aumentare il tempo nei sistemi Windows 98 di caricamento. Per altre informazioni sulle opzioni di collegamento, vedere [/OPT (ottimizzazioni)](../build/reference/opt-optimizations.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione con codice di runtime C e ATL](../atl/programming-with-atl-and-c-run-time-code.md)   
 [DLL e comportamento delle librerie di runtime Visual C++](../build/run-time-library-behavior.md)

