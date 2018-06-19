---
title: Utilizzo di librerie di importazione e file di esportazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- LIB [C++], /DEF option
- import libraries
- LIB [C++], import libraries and export files
- export files
- import libraries, creating
ms.assetid: d8175596-9773-4c2f-959d-b05b065a5161
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bc2e5b6b1f2a459d7a00e48ff1aaafff38803871
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32377932"
---
# <a name="working-with-import-libraries-and-export-files"></a>Utilizzo di librerie di importazione e file di esportazione
È possibile utilizzare LIB con l'opzione /DEF per creare una libreria di importazione e un file di esportazione. COLLEGAMENTO viene utilizzato il file di esportazione per compilare un programma che contiene esportazioni (in genere un collegamento dinamico (DLL)) e utilizza la libreria di importazione per risolvere i riferimenti a queste esportazioni in altri programmi.  
  
 Si noti che se si crea la libreria di importazione in un passaggio preliminare prima della creazione della DLL, è necessario passare lo stesso set di file oggetto quando si compila il file DLL, come è stato passato quando si compila la libreria di importazione.  
  
 Nella maggior parte dei casi non occorre utilizzare LIB per creare la libreria di importazione. Quando si collega un programma (un file eseguibile o una DLL) che contiene esportazioni, verrà creata automaticamente una libreria di importazione che descrive le esportazioni. In un secondo momento, quando si collega un programma che fa riferimento a queste esportazioni, specificare la libreria di importazione.  
  
 Tuttavia, quando si esporta un programma che importa anche da una DLL, che direttamente o indirettamente, è necessario utilizzare LIB per creare una delle librerie di importazione. La creazione di una libreria di importazione, crea anche un file di esportazione. Durante il collegamento di una DLL, è necessario utilizzare il file di esportazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a LIB](../../build/reference/lib-reference.md)