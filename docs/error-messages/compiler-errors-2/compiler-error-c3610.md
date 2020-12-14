---
description: 'Altre informazioni su: errore del compilatore C3610'
title: Errore del compilatore C3610
ms.date: 11/04/2016
f1_keywords:
- C3610
helpviewer_keywords:
- C3610
ms.assetid: 9349a348-9d37-4a00-9eab-481039268d31
ms.openlocfilehash: 0fca8f57fcdf2e935620118092708ba1c94f5ec0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223139"
---
# <a name="compiler-error-c3610"></a>Errore del compilatore C3610

' ValueType ': il tipo di valore deve essere ' boxed ' prima che sia possibile chiamare il metodo ' Method '

Per impostazione predefinita, un tipo di valore non è presente nell'heap gestito. Prima di poter chiamare metodi da classi di Runtime .NET, ad esempio `Object` , è necessario spostare il tipo di valore nell'heap gestito.

C3610 è raggiungibile solo usando l'opzione del compilatore obsolete **/CLR: oldSyntax**.
