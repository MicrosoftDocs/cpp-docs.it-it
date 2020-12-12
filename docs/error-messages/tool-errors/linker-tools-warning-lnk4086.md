---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4086'
title: Avviso degli strumenti del linker LNK4086
ms.date: 11/04/2016
f1_keywords:
- LNK4086
helpviewer_keywords:
- LNK4086
ms.assetid: ea1eecbb-ba2c-41bb-9a4f-fa0808a4b92d
ms.openlocfilehash: f19138d895706579cff13bd1d43b9a64ccaa5044
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97210114"
---
# <a name="linker-tools-warning-lnk4086"></a>Avviso degli strumenti del linker LNK4086

il punto di ingresso ' Function ' non è __stdcall con ' Number ' byte degli argomenti; l'immagine potrebbe non essere eseguita

Il punto di ingresso per una DLL deve essere **`__stdcall`** . Ricompilare la funzione con l'opzione [/GZ](../../build/reference/gd-gr-gv-gz-calling-convention.md) o specificare **`__stdcall`** o WINAPI quando si definisce la funzione.
