---
title: C4746 di avviso del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
dev_langs: C++
ms.assetid: 5e79ab46-6031-499a-a986-716c866b6c0e
caps.latest.revision: "2"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 1b88f51aa9365c0795c8d3d944ba9f3a8db059d9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-c4746"></a>C4746 di avviso del compilatore
accesso volatile di '\<espressione >' è soggetto a /volatile: [iso &#124; ms] impostazione; considerare l'utilizzo di funzioni intrinseche iso_volatile_load/store.  
  
 C4746 viene generato ogni volta che si accede ad una variabile volatile direttamente. È progettato per consentire agli sviluppatori di identificare i percorsi di codice che sono influenzati dal modello volatile attualmente specificato (che può essere controllato con i [/volatile](../../build/reference/volatile-volatile-keyword-interpretation.md) l'opzione del compilatore). In particolare, può essere utile per individuare barriere di memoria hardware generate dal compilatore quando /volatile:ms viene utilizzato.  
  
 Le funzioni intrinseche __iso_volatile_load/store possono essere utilizzate per accedere in modo esplicito alla memoria volatile senza essere influenzate dal modello volatile. Utilizzando queste funzioni intrinseche non verrà generato C4746.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .