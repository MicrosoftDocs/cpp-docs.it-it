---
title: Errore del compilatore C3610 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3610
dev_langs:
- C++
helpviewer_keywords:
- C3610
ms.assetid: 9349a348-9d37-4a00-9eab-481039268d31
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b46b3669978ff3735d5a16015ca0a01e65f07ae9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46037853"
---
# <a name="compiler-error-c3610"></a>Errore del compilatore C3610

'valuetype': tipo di valore deve essere 'boxed' prima di poter chiamare il 'metodo metodo'

Per impostazione predefinita, un tipo di valore non è nell'heap gestito. Prima di chiamare i metodi da classi di runtime .NET, ad esempio `Object`, è necessario spostare il tipo di valore nell'heap gestito.

È raggiungibile tramite l'opzione del compilatore obsolete solo C3610 **/CLR: oldSyntax**.
