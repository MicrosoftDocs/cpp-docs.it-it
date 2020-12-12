---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4102'
title: Avviso degli strumenti del linker LNK4102
ms.date: 11/04/2016
f1_keywords:
- LNK4102
helpviewer_keywords:
- LNK4102
ms.assetid: bfd1b17e-05c7-4bc2-80d6-2888b1a425b2
ms.openlocfilehash: b0977cfa89c0ddb5edbc7dc74428b774331a87e3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294457"
---
# <a name="linker-tools-warning-lnk4102"></a>Avviso degli strumenti del linker LNK4102

esportazione dell'eliminazione del distruttore ' name '; l'immagine potrebbe non essere eseguita correttamente

Il programma ha tentato di esportare un distruttore di eliminazione. L'eliminazione risultante può verificarsi in un limite di DLL in modo che un processo possa liberare memoria di cui non è proprietario. Verificare che il simbolo specificato non sia elencato nel file def e che il simbolo non sia elencato come argomento dell'opzione **/Import** o **/Export** nella riga di comando del linker.

Se si sta ricompilando la libreria di runtime del linguaggio C, è possibile ignorare questo messaggio.
