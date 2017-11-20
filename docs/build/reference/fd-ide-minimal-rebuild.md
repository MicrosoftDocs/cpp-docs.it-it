---
title: -FD (ricompilazione minima IDE) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /FD
dev_langs: C++
helpviewer_keywords:
- /FD compiler option [C++]
- -FD compiler option [C++]
- FD compiler option [C++]
ms.assetid: 7ef21b8c-a448-4bb4-9585-a2a870028e17
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 5fac2b16d3a494c323a351ab0cb67f1940523649
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="fd-ide-minimal-rebuild"></a>/FD (Ricompilazione minima IDE)
**/FD** non viene esposto agli utenti, ad eccezione di [riga di comando](../../ide/command-line-property-pages.md) pagina delle proprietà di un progetto di C++ **pagine delle proprietà** nella finestra di dialogo, se e solo se [/Gm (Abilita ricompilazione minima)](../../build/reference/gm-enable-minimal-rebuild.md) non è stata selezionata. **/FD** non ha alcun effetto diverso dall'ambiente di sviluppo. **/FD** non è esposta nell'output di **cl /?**.  
  
 Se non si abilita **/Gm** nell'ambiente di sviluppo, **/FD** verrà utilizzato. **/FD** assicura che il file con estensione IDB disponga di sufficienti informazioni di dipendenza. **/FD** viene utilizzata solo dall'ambiente di sviluppo, e non deve essere utilizzato dalla riga di comando o uno script di compilazione.  
  
## <a name="see-also"></a>Vedere anche  
 [File di output (/ F) opzioni](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)