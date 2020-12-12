---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4678'
title: Avviso del compilatore (livello 1) C4678
ms.date: 11/04/2016
f1_keywords:
- C4678
helpviewer_keywords:
- C4678
ms.assetid: 0c588f34-595d-4e5c-9470-8723fca2cc06
ms.openlocfilehash: a590bd03ba73fc4f8d5421727e5e35ac1384ffaa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97285383"
---
# <a name="compiler-warning-level-1-c4678"></a>Avviso del compilatore (livello 1) C4678

classe base 'base_type' meno accessibile di 'derived_type'

Un tipo pubblico deriva da un tipo privato. Se viene creata un'istanza del tipo pubblico in un assembly di riferimento, i membri del tipo di base privato non saranno accessibili.

C4678 è raggiungibile solo usando l'opzione del compilatore obsolete **/CLR: oldSyntax**. Si tratta di un errore quando si usa **/CLR** per avere una classe base meno accessibile della relativa classe derivata.
