---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4247'
title: Avviso degli strumenti del linker LNK4247
ms.date: 11/04/2016
f1_keywords:
- LNK4247
helpviewer_keywords:
- LNK4247
ms.assetid: 085d7fdf-9eaf-4641-8473-6eaadd073c7b
ms.openlocfilehash: 88cd04e345b798b6927c3a5297380f1eeb3c5f5c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241183"
---
# <a name="linker-tools-warning-lnk4247"></a>Avviso degli strumenti del linker LNK4247

il punto di ingresso ' decorated_function_name ' ha già un attributo thread; ' attribute ' ignorato

Un punto di ingresso, specificato con [/entry (simbolo del punto di ingresso)](../../build/reference/entry-entry-point-symbol.md), presenta un attributo threading, ma è stato specificato anche [/CLRTHREADATTRIBUTE (Set CLR Thread Attribute)](../../build/reference/clrthreadattribute-set-clr-thread-attribute.md) con un modello di threading diverso.

Il linker ha ignorato il valore specificato con/CLRTHREADATTRIBUTE.

Per risolvere il problema:

- Rimuovere/CLRTHREADATTRIBUTE dalla compilazione.

- Rimuovere l'attributo dal file di codice sorgente.

- Rimuovere l'attributo da source e/CLRTHREADATTRIBUTE dalla compilazione e accettare il modello di threading CLR predefinito.

- Modificare il valore passato a/CLRTHREADATTRIBUTE, in modo che accetti l'attributo nell'origine.

- Modificare l'attributo nell'origine, in modo che accetti il valore passato a/CLRTHREADATTRIBUTE.

L'esempio seguente genera LNK4247

```cpp
// LNK4247.cpp
// compile with: /clr /c
// post-build command: link /CLRTHREADATTRIBUTE:STA LNK4247.obj /entry:functionTitle /SUBSYSTEM:Console
[System::MTAThreadAttribute]
void functionTitle (){}
```
