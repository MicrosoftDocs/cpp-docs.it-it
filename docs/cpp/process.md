---
title: processo
ms.date: 11/04/2016
f1_keywords:
- process_cpp
helpviewer_keywords:
- __declspec keyword [C++], process
- process __declspec keyword
ms.assetid: 60eecc2f-4eef-4567-b9db-aaed34733023
ms.openlocfilehash: f684c9c2ddfcb0aa166e1240c5f928ee52218f45
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227205"
---
# `process`

Specifica che il processo dell'applicazione gestita deve includere una sola copia di una variabile globale specifica, di una variabile membro statica o di una variabile locale statica condivisa tra tutti i domini dell'applicazione presenti nel processo. Questa operazione è stata principalmente progettata per essere usata durante la compilazione con **`/clr:pure`** , deprecata in Visual studio 2015 e non supportata in Visual studio 2017. Quando si esegue la compilazione con **`/clr`** , le variabili globali e statiche sono per processo per impostazione predefinita e non è necessario usare **`__declspec(process)`** .

Solo una variabile globale, una variabile membro statica o una variabile locale statica di tipo nativo può essere contrassegnata con **`__declspec(process)`** .

**`process`** è valido solo quando si esegue la compilazione con [`/clr`](../build/reference/clr-common-language-runtime-compilation.md) .

Se si desidera che ogni dominio applicazione disponga di una propria copia di una variabile globale, utilizzare [AppDomain](../cpp/appdomain.md).

Per ulteriori informazioni, vedere [domini applicazione e Visual C++](../dotnet/application-domains-and-visual-cpp.md) .

## <a name="see-also"></a>Vedere anche

[`__declspec`](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
