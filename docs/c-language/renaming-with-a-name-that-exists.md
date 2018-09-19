---
title: Ridenominazione con un nome già esistente | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: fc2a8f29-f757-4ce0-8d7f-7f8cff7f49ab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 10b9a9c4e42356a087c8cb6c10a470ba68acd4ba
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46067754"
---
# <a name="renaming-with-a-name-that-exists"></a>Ridenominazione con un nome già esistente

**ANSI 4.9.4.2** L'effetto che si verifica se un file con il nuovo nome esiste prima di una chiamata alla funzione **rename**

Se si tenta di rinominare un file con un nome che esiste già, la funzione **rename** ha esito negativo e restituisce un codice di errore.

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)