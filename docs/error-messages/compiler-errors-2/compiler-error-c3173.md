---
title: Errore del compilatore C3173 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3173
dev_langs:
- C++
helpviewer_keywords:
- C3173
ms.assetid: edf79e10-e8cf-4f76-8d33-ab9d05e974e9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 21a02ae1fcf4aff9636445979a81ef0a02ab5cb1
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053024"
---
# <a name="compiler-error-c3173"></a>Errore del compilatore C3173

mancata corrispondenza delle versioni nel merge idl

Questo errore si verifica quando un file di oggetti contiene idl incorporate che è stata generata con una versione precedente del compilatore. Il compilatore consente di codificare un numero di versione per assicurarsi che lo stesso compilatore usato per generare il contenuto idl incorporato nel file obj è anche lo stesso compilatore usato per unire file idl incorporato.

Aggiornare l'installazione di Visual C++ in modo che siano tutti gli strumenti dalla versione rilasciata più recente.