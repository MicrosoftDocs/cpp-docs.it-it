---
title: Formattazione dell'Output di un'istruzione di compilazione personalizzata o un evento di compilazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- builds [C++], build events
- custom build steps [C++], output format
- events [C++], build
- build events [C++], output format
- build steps [C++], output format
- builds [C++], custom build steps
ms.assetid: 92ad3e38-24d7-4b89-90e6-5a16f5f998da
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 53720e93c7d45f1eaeb0e62749194720373bee1c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="formatting-the-output-of-a-custom-build-step-or-build-event"></a>Formattazione dell'output di un'istruzione di compilazione personalizzata o un evento di compilazione
Se l'output di un'istruzione di compilazione personalizzata o un evento di compilazione è formattato correttamente, gli utenti ottengono i vantaggi seguenti:  
  
-   Avvisi ed errori sono conteggiati **Output** finestra.  
  
-   Viene visualizzato in output il **elenco attività** finestra.  
  
-   Facendo clic sull'output nella **Output** finestra viene visualizzato l'argomento appropriato.  
  
-   Sono abilitate le operazioni di F1 il **elenco attività** finestra o **Output** finestra.  
  
 Il formato dell'output deve essere:  
  
 {*filename* (*riga #* [, *colonna #*]) &#124; *toolname*} **:**  
  
 [*qualsiasi testo*] {**errore** &#124; **avviso**} *codice # # #***:***stringa localizzabile*  
  
 [ *qualsiasi testo* ]  
  
 Dove:  
  
-   {*un* &#124; *b*} è una scelta di *un* o *b*.  
  
-   [`ccc`] è un parametro stringa facoltativa.  
  
 Ad esempio:  
  
 C:\\*sourcefile.cpp*(134): errore C2143: errore di sintassi: manca ';' prima di '}'  
  
 LINK: errore irreversibile LNK1104: Impossibile aprire il file '*somelib.lib*'  
  
## <a name="see-also"></a>Vedere anche  
 [Informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md)