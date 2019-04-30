---
title: processo
ms.date: 11/04/2016
f1_keywords:
- process_cpp
helpviewer_keywords:
- __declspec keyword [C++], process
- process __declspec keyword
ms.assetid: 60eecc2f-4eef-4567-b9db-aaed34733023
ms.openlocfilehash: 049360dddff2b9ca2ea460b96e027e86899f1ecb
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64344988"
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
