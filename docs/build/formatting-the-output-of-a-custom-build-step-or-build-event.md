---
description: "Altre informazioni su: formattazione dell'output di un'istruzione di compilazione personalizzata o un evento di compilazione"
title: Formattazione dell'output di un'istruzione di compilazione personalizzata o un evento di compilazione
ms.date: 08/27/2018
helpviewer_keywords:
- builds [C++], build events
- custom build steps [C++], output format
- events [C++], build
- build events [C++], output format
- build steps [C++], output format
- builds [C++], custom build steps
ms.assetid: 92ad3e38-24d7-4b89-90e6-5a16f5f998da
ms.openlocfilehash: c2631e3c6cbd8e66d88527ff75ff7bcac9869b4f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97156424"
---
# <a name="formatting-the-output-of-a-custom-build-step-or-build-event"></a>Formattazione dell'output di un'istruzione di compilazione personalizzata o un evento di compilazione

Se l'output di un'istruzione di compilazione personalizzata o un evento di compilazione viene formattato correttamente, si evidenziano i vantaggi seguenti:

- Avvisi ed errori sono conteggiati nella finestra **Output**.

- L'output viene visualizzato nella finestra **Elenco attività**.

- Facendo clic sull'output nella finestra **Output** viene visualizzato l'argomento corrispondente.

- Le operazioni di F1 sono abilitate nella finestra **Elenco attività** o **Output**.

Il formato dell'output sarà il seguente:

> {<em>filename</em>**(**<em>riga #</em> \[ **,** <em>colonna #</em>]**)** &#124; *ToolName*} **:** \[ <em>qualsiasi testo</em> ] {**error** &#124; **avviso**} <em>codice + numero</em>**:**<em>stringa localizzabile</em> \[ <em>qualsiasi testo</em> ]

Dove:

- {*a* &#124; *b*} è una scelta tra *a* o *b*.

- \[<em>elemento</em>] è una stringa o un parametro facoltativo.

- **Grassetto** rappresenta un valore letterale.

Ad esempio:

> C:\\*sourcefile.cpp*(134) : error C2143: syntax error : missing ';' before '}'
>
> LINK : fatal error LNK1104: cannot open file '*somelib.lib*'

## <a name="see-also"></a>Vedi anche

[Informazioni sulle istruzioni di compliazione personalizzate e sugli eventi di compilazione](understanding-custom-build-steps-and-build-events.md)
