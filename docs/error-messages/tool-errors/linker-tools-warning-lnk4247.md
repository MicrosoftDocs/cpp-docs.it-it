---
title: Avviso degli strumenti del linker LNK4247
ms.date: 11/04/2016
f1_keywords:
- LNK4247
helpviewer_keywords:
- LNK4247
ms.assetid: 085d7fdf-9eaf-4641-8473-6eaadd073c7b
ms.openlocfilehash: cd4108f8bd06ec7a0b2d2eb9fab13917174b797b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50516025"
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