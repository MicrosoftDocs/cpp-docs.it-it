---
title: Avviso degli strumenti del linker LNK4102
ms.date: 11/04/2016
f1_keywords:
- LNK4102
helpviewer_keywords:
- LNK4102
ms.assetid: bfd1b17e-05c7-4bc2-80d6-2888b1a425b2
ms.openlocfilehash: fda1fdb03a7629894f846bb20ed84df519239327
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80183306"
---
# <a name="linker-tools-warning-lnk4102"></a>Avviso degli strumenti del linker LNK4102

esportazione dell'eliminazione del distruttore ' name '; l'immagine potrebbe non essere eseguita correttamente

Il programma ha tentato di esportare un distruttore di eliminazione. L'eliminazione risultante può verificarsi in un limite di DLL in modo che un processo possa liberare memoria di cui non è proprietario. Verificare che il simbolo specificato non sia elencato nel file def e che il simbolo non sia elencato come argomento dell'opzione **/Import** o **/Export** nella riga di comando del linker.

Se si sta ricompilando la libreria di runtime del linguaggio C, è possibile ignorare questo messaggio.
