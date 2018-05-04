---
title: Informazioni sulla funzione di supporto | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- delayed loading of DLLs, helper function
- __delayLoadHelper2 function
- delayimp.lib
- __delayLoadHelper function
- delayhlp.cpp
- delayimp.h
- helper functions
ms.assetid: 6279c12c-d908-4967-b0b3-cabfc3e91d3d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 54ed331022c29ecc47d61bbcccbfac82000cb235
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="understanding-the-helper-function"></a>Informazioni sulla funzione di supporto
La funzione di supporto per il caricamento ritardato supportato dal linker è ciò che effettivamente carica la DLL in fase di esecuzione. È possibile modificare la funzione di supporto per personalizzare il comportamento scrivendo una funzione personalizzata e collegarla al programma anziché utilizzare la funzione di supporto fornito in Delayimp. Una funzione di supporto serve tutte le DLL a caricamento ritardato.  
  
 Se si desidera eseguire un'elaborazione specifica in base ai nomi di DLL o di importazione, è possibile fornire la propria versione della funzione di supporto.  
  
 La funzione di supporto esegue le azioni seguenti:  
  
-   Controlla l'handle memorizzato nella libreria per verificare se è già stato caricato  
  
-   Chiamate **LoadLibrary** tentativo di caricamento della DLL  
  
-   Chiamate **GetProcAddress** per tentare di ottenere l'indirizzo della routine.  
  
-   Restituisce un valore per l'importazione di ritardo caricare thunk per chiamare il punto di ingresso appena caricato.  
  
 La funzione di supporto è possibile richiamare una funzione hook di notifica nel programma dopo l'esecuzione delle azioni seguenti:  
  
-   All'avvio la funzione di supporto  
  
-   Subito prima **LoadLibrary** viene chiamato nella funzione di supporto  
  
-   Subito prima **GetProcAddress** viene chiamato nella funzione di supporto  
  
-   Se la chiamata a **LoadLibrary** nella funzione di supporto non riuscita  
  
-   Se la chiamata a **GetProcAddress** nella funzione di supporto non riuscita  
  
-   Dopo il supporto per la funzione viene eseguita l'elaborazione  
  
 Ognuno di questi punti di hook può restituire un valore in grado di modificare la normale elaborazione della routine di supporto in qualche modo ad eccezione del ritorno al carico thunk importazione ritardo.  
  
 Il codice di supporto predefinito è reperibile in cpp e Delayimp. h (in vc\include) e viene compilato in Delayimp (in vc\lib). È necessario includere la libreria nelle compilazioni a meno che non si scrive una funzione di supporto.  
  
 Gli argomenti seguenti descrivono la funzione di supporto:  
  
-   [Modifiche della funzione di supporto del caricamento ritardato delle DLL introdotte a partire da Visual C++ 6.0](../../build/reference/changes-in-the-dll-delayed-loading-helper-function-since-visual-cpp-6-0.md)  
  
-   [Convenzioni di chiamata, parametri e tipo restituito](../../build/reference/calling-conventions-parameters-and-return-type.md)  
  
-   [Struttura e definizioni di costanti](../../build/reference/structure-and-constant-definitions.md)  
  
-   [Calcolo dei valori necessari](../../build/reference/calculating-necessary-values.md)  
  
-   [Scaricamento di una DLL a caricamento ritardato](../../build/reference/explicitly-unloading-a-delay-loaded-dll.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)