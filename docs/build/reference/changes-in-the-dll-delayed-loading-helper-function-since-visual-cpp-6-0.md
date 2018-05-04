---
title: 'Funzione di supporto rispetto a Visual C++ 6.0 del caricamento ritardato delle DLL: modifiche introdotte | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- delayed loading of DLLs, what's changed
- PFromRva method
- __delayLoadHelper2 function
- helper functions, what's changed
ms.assetid: 99f0be69-105d-49ba-8dd5-3be7939c0c72
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3af68e5ba92a96502e295e75520cd182b4633dae
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="changes-in-the-dll-delayed-loading-helper-function-since-visual-c-60"></a>Funzione di supporto del caricamento ritardato delle DLL: modifiche introdotte rispetto a Visual C++ 6.0
Se si dispone di più versioni di Visual C++ nel computer in uso o se è definita una funzione di supporto, può dipendere dalle modifiche apportate alla DLL caricamento ritardato funzione di supporto. Ad esempio:  
  
-   **delayLoadHelper** è ora **__delayLoadHelper2**  
  
-   **pfnDliNotifyHook diventa** è ora **pfnDliNotifyHook2**  
  
-   **pfnDliFailureHook** è ora **pfnDliFailureHook2**  
  
-   **FUnloadDelayLoadedDLL** è ora **FUnloadDelayLoadedDLL2**  
  
> [!NOTE]
>  Se si utilizza la funzione di supporto predefinito, queste modifiche non avranno effetto. Non sono presenti modifiche relative alla modalità di richiamo del linker.  
  
## <a name="multiple-versions-of-visual-c"></a>Più versioni di Visual C++  
 Se si dispone di più versioni di Visual C++ nel computer, assicurarsi che il linker corrisponda delayimp. Se è presente una mancata corrispondenza, si otterrà un errore del linker uno `___delayLoadHelper2@8` o `___delayLoadHelper@8` come simbolo esterno non risolto. Il primo implica un linker nuovo con un vecchio delayimp e quest'ultimo implica un linker precedente con un nuovo delayimp.  
  
 Se si verifica un errore del linker non risolto, eseguire [dumpbin /linkermember](../../build/reference/linkermember.md): 1 sulla delayimp. lib che si prevede di includere la funzione di supporto per individuare la funzione di supporto è definita. La funzione di supporto può anche essere definita in un file oggetto. eseguire [dumpbin /symbols](../../build/reference/symbols.md) e cercare `delayLoadHelper(2)`.  
  
 Se si conosce il linker Visual C++ 6.0, si dispone quindi:  
  
-   Eseguire dumpbin sul file lib o obj dell'helper a caricamento ritardato per determinare se definisce **delayLoadHelper2**. In caso contrario, il collegamento avrà esito negativo.  
  
-   Definire **delayLoadHelper** il ritardo di caricare file lib o obj del supporto.  
  
## <a name="user-defined-helper-function"></a>Funzione di supporto definito dall'utente  
 Se si utilizza la versione corrente di Visual C++ definita funzione di supporto, eseguire le operazioni seguenti:  
  
-   Rinominare la funzione di supporto per **delayLoadHelper2**.  
  
-   Poiché i puntatori nel descrittore di ritardo (ImgDelayDescr in Delayimp. h) sono stati modificati da indirizzi assoluti (va) per gli indirizzi relativi (RVA) a funzionare come previsto in entrambi i programmi a 32 e a 64 bit, è necessario convertire nuovamente i puntatori. È stata introdotta una nuova funzione: PFromRva, trovato in cpp. È possibile utilizzare questa funzione in ognuno dei campi nel descrittore di convertirle puntatori a 32 o 64 bit. La funzione di supporto carico ritardo predefinito continua a essere un buon modello da utilizzare come un esempio.  
  
## <a name="load-all-imports-for-a-delay-loaded-dll"></a>Caricare tutte le importazioni per una DLL a caricamento ritardato  
 Il linker è possibile caricare tutte le importazioni da una DLL a caricamento ritardato specificato. Vedere [durante il caricamento di tutte le importazioni per una DLL a caricamento ritardato](../../build/reference/loading-all-imports-for-a-delay-loaded-dll.md) per ulteriori informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Informazioni sulla funzione di supporto](understanding-the-helper-function.md)