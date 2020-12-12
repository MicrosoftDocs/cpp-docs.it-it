---
description: 'Altre informazioni su: collegamento a CRT nel progetto ATL'
title: Collegamento a CRT nel progetto ATL
ms.date: 11/04/2016
helpviewer_keywords:
- CRT, linking with ATL
- WinMainCRTStartup method
- DllMainCRTStartup method
- wWinMainCRTStartup method
- ATL, C Run-Time library (CRT)
ms.assetid: 650957ae-362c-4ecf-8b03-5d49138e8b5b
ms.openlocfilehash: e54301332d9a83546e41ab42169f06d305bbc6a2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147628"
---
# <a name="linking-to-the-crt-in-your-atl-project"></a>Collegamento a CRT nel progetto ATL

Le [librerie di Run-Time C](../c-runtime-library/crt-library-features.md) (CRT) forniscono molte funzioni utili che semplificano notevolmente la programmazione durante lo sviluppo di ATL. Tutti i progetti ATL sono collegati alla libreria CRT. È possibile visualizzare i vantaggi e gli svantaggi del metodo di collegamento nei [vantaggi e nei compromessi del metodo usato per il collegamento a CRT](../atl/benefits-and-tradeoffs-of-the-method-used-to-link-to-the-crt.md).

## <a name="effects-of-linking-to-the-crt-on-your-program-image"></a>Effetti del collegamento a CRT sull'immagine del programma

Se si collega in modo statico a CRT, il codice di CRT viene inserito nell'immagine eseguibile e non è necessario che la DLL CRT sia presente in un sistema per eseguire l'immagine. Se si collega dinamicamente a CRT, i riferimenti al codice nella DLL CRT vengono inseriti nell'immagine, ma non nel codice stesso. Per consentire l'esecuzione dell'immagine in un sistema specifico, è necessario che la DLL CRT sia presente nel sistema. Anche quando si collega dinamicamente a CRT, è possibile che alcuni codici siano collegati staticamente (ad esempio, `DllMainCRTStartup` ).

Quando si collega l'immagine, è possibile specificare in modo esplicito o implicito un punto di ingresso che il sistema operativo chiamerà dopo il caricamento dell'immagine. Per una DLL, il punto di ingresso predefinito è `DllMainCRTStartup` . Per un file EXE, è `WinMainCRTStartup` . È possibile eseguire l'override dell'impostazione predefinita con l'opzione del linker/ENTRY. CRT fornisce un'implementazione per `DllMainCRTStartup` , `WinMainCRTStartup` e `wWinMainCRTStartup` (il punto di ingresso Unicode per un file exe). Questi punti di ingresso forniti da CRT chiamano costruttori sugli oggetti globali e inizializzano altre strutture di dati usate da alcune funzioni CRT. Questo codice di avvio aggiunge informazioni su 25K all'immagine se è collegata in modo statico. Se è collegato dinamicamente, la maggior parte del codice è presente nella DLL, quindi le dimensioni dell'immagine rimangono ridotte.

Per altre informazioni, vedere l'argomento del linker [/entry (simbolo del punto di ingresso)](../build/reference/entry-entry-point-symbol.md).

## <a name="optimization-options"></a>Opzioni di ottimizzazione

Utilizzando l'opzione del linker/OPT: NOWIN98 può ridurre ulteriormente un controllo ATL predefinito da 10.000, a scapito del tempo di caricamento maggiore nei sistemi Windows 98. Per ulteriori informazioni sulle opzioni di collegamento, vedere [/opt (ottimizzazioni)](../build/reference/opt-optimizations.md).

## <a name="see-also"></a>Vedi anche

[Programmazione con ATL e codice C Run-Time](../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[DLL e comportamento delle librerie di runtime Visual C++](../build/run-time-library-behavior.md)
