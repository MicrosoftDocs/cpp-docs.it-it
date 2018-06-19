---
title: Importazione ed esportazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- DLLs [C++], importing
- exporting DLLs [C++]
- importing DLLs [C++]
- DLLs [C++], exporting from
- __declspec(dllimport) keyword [C++]
ms.assetid: 7c44c2aa-2117-4cec-9615-a65bfd3f8f7b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9ee3ffe33dbb99f1f9b4124e2695d2e56dbe5544
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32368873"
---
# <a name="importing-and-exporting"></a>Importazione ed esportazione
È possibile importare simboli pubblici in un'applicazione o esportare funzioni da una DLL tramite due metodi:  
  
-   Usare un file di definizione (con estensione def) modulo durante la compilazione della DLL  
  
-   Utilizzare le parole chiave **declspec** o **dllexport** in una definizione di funzione nell'applicazione principale.  
  
## <a name="using-a-def-file"></a>Utilizzo di un file. def  
 Un file di definizione moduli (def) è un file di testo che contiene uno o più istruzioni di modulo che descrivono i vari attributi di una DLL. Se non si utilizza **declspec** o **dllexport** per esportare le funzioni della DLL, è necessario un file def.  
  
 È possibile utilizzare file def per [importazione in un'applicazione](../build/importing-using-def-files.md) o [esportazione da una DLL](../build/exporting-from-a-dll-using-def-files.md).  
  
## <a name="using-declspec"></a>Utilizzo di declspec  
 Visual C++ utilizza **declspec** e **dllexport** per sostituire il **Export** parola chiave utilizzata in precedenza in versioni di Visual C++ a 16 bit.  
  
 Non è necessario utilizzare **declspec** per il codice venga compilato correttamente, ma in questo modo consente al compilatore di generare codice più efficiente. Il compilatore è in grado di generare codice più efficiente poiché può determinare se esiste una funzione in una DLL o non, che consente il compilatore genera codice che ignora un livello di riferimento indiretto che normalmente sarebbe presente in una chiamata di funzione che attraversa i limiti di una DLL. Tuttavia, è necessario utilizzare **declspec** per importare le variabili utilizzate in una DLL.  
  
 Con la sezione EXPORTS file def appropriato, **dllexport** non è obbligatorio. **dllexport** è stata aggiunta per fornire un modo semplice per esportare funzioni da un file con estensione dll o .exe senza utilizzare un file. def.  
  
 Il formato del file eseguibile portabile Win32 è progettato per ridurre al minimo il numero di pagine che devono essere modificate per risolvere le importazioni. A tale scopo, inserisce tutti gli indirizzi di importazione per qualsiasi programma in un'unica posizione denominata tabella di indirizzi di importazione. Il caricatore può modificare solo una o due pagine quando si accede a tali importazioni.  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Importazione in un'applicazione](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Esportazione da una DLL](../build/exporting-from-a-dll.md)  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)