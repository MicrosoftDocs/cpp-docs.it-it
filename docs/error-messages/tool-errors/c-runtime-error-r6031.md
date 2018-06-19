---
title: R6031 errore di Runtime C | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6031
dev_langs:
- C++
helpviewer_keywords:
- R6031
ms.assetid: 805d4cd1-cb2f-43fe-87e6-e7bd5b7329c5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 66d75fb0095b1de0fe1572d8c946823a89791740
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33303946"
---
# <a name="c-runtime-error-r6031"></a>R6031 errore di Runtime C
Tentativo di inizializzare la libreria CRT a più di una volta. Questo indica un bug nell'applicazione.  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema interno. Ciò potrebbe dipendere bug nell'app o da un bug in un componente aggiuntivo o un'estensione che usa l'app.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per rimuovere, ripristinare o reinstallare tutti i programmi aggiuntivi o estensione usati dall'app.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Questo messaggio diagnostico indica che le istruzioni MSIL erano in esecuzione durante il blocco del caricatore. Per ulteriori informazioni, vedere [inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md).