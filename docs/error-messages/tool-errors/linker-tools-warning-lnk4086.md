---
title: Avviso degli strumenti del linker LNK4086
ms.date: 11/04/2016
f1_keywords:
- LNK4086
helpviewer_keywords:
- LNK4086
ms.assetid: ea1eecbb-ba2c-41bb-9a4f-fa0808a4b92d
ms.openlocfilehash: f692f848825cd3d8e5e1fc042cb94d7cce8ea6bf
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87195811"
---
# <a name="linker-tools-warning-lnk4086"></a>Avviso degli strumenti del linker LNK4086

il punto di ingresso ' Function ' non è __stdcall con ' Number ' byte degli argomenti; l'immagine potrebbe non essere eseguita

Il punto di ingresso per una DLL deve essere **`__stdcall`** . Ricompilare la funzione con l'opzione [/GZ](../../build/reference/gd-gr-gv-gz-calling-convention.md) o specificare **`__stdcall`** o WINAPI quando si definisce la funzione.
