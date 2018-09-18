---
title: processo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- process_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], process
- process __declspec keyword
ms.assetid: 60eecc2f-4eef-4567-b9db-aaed34733023
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 65ae8eef828a8abd4bf726c99850089c0f30b71b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46032568"
---
# <a name="process"></a>processo

Specifica che il processo dell'applicazione gestita deve includere una sola copia di una variabile globale specifica, di una variabile membro statica o di una variabile locale statica condivisa tra tutti i domini dell'applicazione presenti nel processo. In questo stato principalmente da utilizzare durante la compilazione con **/clr: pure**, che è stato deprecato in Visual Studio 2017 e non sono supportate in Visual Studio 2017. Durante la compilazione con **/clr**, sono variabili globali e statiche per processo per impostazione predefinita e non è necessario usare **declspec (Process)**.

Solo una variabile globale, una variabile membro statica o una variabile locale statica di tipo nativo può essere contrassegnata con **declspec (Process)**.

**processo** è valido solo durante la compilazione con [/clr](../build/reference/clr-common-language-runtime-compilation.md).

Se si vuole che ogni dominio dell'applicazione per avere una propria copia di una variabile globale, usare [appdomain](../cpp/appdomain.md).

Visualizzare [domini applicazione e Visual C++](../dotnet/application-domains-and-visual-cpp.md) per altre informazioni.

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
