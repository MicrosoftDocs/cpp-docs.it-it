---
description: 'Ulteriori informazioni su: utilizzo di librerie di importazione e di esportazione di file'
title: Utilizzo di librerie di importazione e file di esportazione
ms.date: 11/04/2016
helpviewer_keywords:
- LIB [C++], /DEF option
- import libraries
- LIB [C++], import libraries and export files
- export files
- import libraries, creating
ms.assetid: d8175596-9773-4c2f-959d-b05b065a5161
ms.openlocfilehash: b6e1664aedf5fa87d269e0ff250e6c52d9d18259
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97258798"
---
# <a name="working-with-import-libraries-and-export-files"></a>Utilizzo di librerie di importazione e file di esportazione

È possibile utilizzare LIB con l'opzione/DEF per creare una libreria di importazione e un file di esportazione. Il collegamento utilizza il file di esportazione per compilare un programma che contiene esportazioni, in genere una libreria a collegamento dinamico (DLL), e utilizza la libreria di importazione per risolvere i riferimenti a tali esportazioni in altri programmi.

Si noti che se si crea la libreria di importazione in un passaggio preliminare, prima di creare il file con estensione dll, è necessario passare lo stesso set di file oggetto quando si compila la libreria di importazione.

Nella maggior parte dei casi, non è necessario utilizzare LIB per creare la libreria di importazione. Quando si collega un programma, ovvero un file eseguibile o una DLL, che contiene esportazioni, il collegamento crea automaticamente una libreria di importazione che descrive le esportazioni. Successivamente, quando si collega un programma che fa riferimento a tali esportazioni, si specifica la libreria di importazione.

Tuttavia, quando una DLL viene esportata in un programma da cui importa anche, direttamente o indirettamente, è necessario usare LIB per creare una delle librerie di importazione. Quando LIB crea una libreria di importazione, viene creato anche un file di esportazione. Per il collegamento di una delle dll, è necessario utilizzare il file di esportazione.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento a LIB](lib-reference.md)
