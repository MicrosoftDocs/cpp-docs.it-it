---
title: Avviso degli strumenti del linker LNK4102
ms.date: 11/04/2016
f1_keywords:
- LNK4102
helpviewer_keywords:
- LNK4102
ms.assetid: bfd1b17e-05c7-4bc2-80d6-2888b1a425b2
ms.openlocfilehash: 0f9c8649988dd3056e98730ac4b02022a8c9dd51
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62327262"
---
# <a name="linker-tools-warning-lnk4102"></a>Avviso degli strumenti del linker LNK4102

esportazione dell'eliminazione di un distruttore 'name'; immagine non venga eseguita correttamente

Il programma ha tentato di esportare un distruttore di eliminazione. L'eliminazione risultante può verificarsi tra limiti di una DLL in modo che un processo può liberare la memoria che non è proprietario. Verificare che il simbolo specificato non sia presente nel file def e che il simbolo non è elencato come un argomento del **/importazione** oppure **/ESPORTARE** opzione nella riga di comando del linker.

Se si rigenera la libreria di runtime C, è possibile ignorare questo messaggio.