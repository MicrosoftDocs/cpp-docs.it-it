---
title: Strumenti del linker LNK4247 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4247
dev_langs:
- C++
helpviewer_keywords:
- LNK4247
ms.assetid: 085d7fdf-9eaf-4641-8473-6eaadd073c7b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2d84a5964cb8df5d2973b6031da55d48dade584e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46078010"
---
# <a name="linker-tools-warning-lnk4247"></a>Avviso degli strumenti del linker LNK4247

punto di ingresso 'voce nome_funzione_decorato' esiste già un attributo di thread. 'attribute' ignorata

Un punto di ingresso, specificato con [/ENTRY (simbolo del punto di ingresso)](../../build/reference/entry-entry-point-symbol.md), ha un attributo threading, ma [/CLRTHREADATTRIBUTE (Imposta attributo Thread di CLR)](../../build/reference/clrthreadattribute-set-clr-thread-attribute.md) è stata anche specificata, con un modello di threading diverso.

Il valore specificato con /CLRTHREADATTRIBUTE ignorati dal linker.

Per risolvere il problema:

- Rimuovere /CLRTHREADATTRIBUTE dalla compilazione.

- Rimuovere attributi dal file del codice sorgente.

- Rimuovere entrambi l'attributo di origine e /CLRTHREADATTRIBUTE dalla compilazione e accettare il modello di threading CLR predefinito.

- Modificare il valore passato a /CLRTHREADATTRIBUTE in tal modo coincida con l'attributo di origine.

- Modificare l'attributo di origine, tale che coincidono con il valore passato a /CLRTHREADATTRIBUTE.

L'esempio seguente genera l'errore LNK4247

```
// LNK4247.cpp
// compile with: /clr /c
// post-build command: link /CLRTHREADATTRIBUTE:STA LNK4247.obj /entry:functionTitle /SUBSYSTEM:Console
[System::MTAThreadAttribute]
void functionTitle (){}
```