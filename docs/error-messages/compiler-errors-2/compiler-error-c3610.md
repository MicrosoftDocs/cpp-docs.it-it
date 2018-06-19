---
title: Errore del compilatore C3610 | Documenti Microsoft
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
ms.openlocfilehash: f58d66e9d3dacfa2c0b38eb84fe51e0813a892d3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33252432"
---
# <a name="compiler-error-c3610"></a>Errore del compilatore C3610
'valuetype': tipo di valore deve essere 'boxed' prima di poter chiamare il metodo 'method'  
  
 Per impostazione predefinita, un tipo di valore non è nell'heap gestito. Prima di poter chiamare metodi dalle classi di runtime .NET, ad esempio `Object`, è necessario spostare il tipo di valore per l'heap gestito.  
  
 C3610 solo è raggiungibile anche tramite l'opzione del compilatore obsoleta **oldSyntax**.  
