---
title: Formattazione dell'output di un'istruzione di compilazione personalizzata o un evento di compilazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- builds [C++], build events
- custom build steps [C++], output format
- events [C++], build
- build events [C++], output format
- build steps [C++], output format
- builds [C++], custom build steps
ms.assetid: 92ad3e38-24d7-4b89-90e6-5a16f5f998da
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7da71e6391d2d3223b47ba528686d2fec003ab3a
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33321350"
---
# <a name="formatting-the-output-of-a-custom-build-step-or-build-event"></a>Formattazione dell'output di un'istruzione di compilazione personalizzata o un evento di compilazione
Se l'output di un'istruzione di compilazione personalizzata o un evento di compilazione viene formattato correttamente, si evidenziano i vantaggi seguenti:  
  
-   Avvisi ed errori sono conteggiati nella finestra **Output**.  
  
-   L'output viene visualizzato nella finestra **Elenco attività**.  
  
-   Facendo clic sull'output nella finestra **Output** viene visualizzato l'argomento corrispondente.  
  
-   Le operazioni di F1 sono abilitate nella finestra **Elenco attività** o **Output**.  
  
 Il formato dell'output sarà il seguente:  
  
 {*filename* (*line#* [, *column#*]) &#124; *toolname*} **:**  
  
 [*any text*] {**error** &#124; **warning**} *code####***:*** localizable string*  
  
 [ *any text* ]  
  
 Dove:  
  
-   {*a* &#124; *b*} è una scelta tra *a* o *b*.  
  
-   [`ccc`] è una stinga o un parametro facoltativo.  
  
 Ad esempio:  
  
 C:\\*sourcefile.cpp*(134) : error C2143: syntax error : missing ';' before '}'  
  
 LINK : fatal error LNK1104: cannot open file '*somelib.lib*'  
  
## <a name="see-also"></a>Vedere anche  
 [Informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md)