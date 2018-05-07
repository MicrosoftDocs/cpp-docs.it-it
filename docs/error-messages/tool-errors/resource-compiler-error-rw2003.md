---
title: Errore del compilatore di risorse RW2003 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RW2003
dev_langs:
- C++
helpviewer_keywords:
- RW2003
ms.assetid: 9dc0ba70-6776-4aef-b316-5f1711d8e42e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 10cbd42d976566b1bd8388b8a42429cd7e57639d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="resource-compiler-error-rw2003"></a>Errore del compilatore di risorse RW2003
Errore di generazione  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  **Errore: Mappa di bit risorsa di file non è in formato 3.00**  
  
     Le immagini bitmap in formato Windows versione 2. x non possono essere usate nei file di risorse della versione 3. x. La bitmap deve essere ridisegnata o convertita in formato 3. x.  
  
2.  **Errore: DIB precedente nel nome di risorsa. Passarlo tramite SDKPAINT**  
  
     Una Bitmap indipendente di dispositivo (DIB) nella risorsa specificata non è compatibile con il formato 3.0 di Windows. La bitmap deve essere ridisegnata o convertita nel formato 3. x.  
  
3.  **Errore: Nome-risorsa di file di risorse non è in formato 3.00**  
  
     Un'icona o cursore nella risorsa specificata utilizza un formato da una versione precedente di Windows. L'icona o cursore deve essere ridisegnato o convertiti nel formato 3. x.  
  
4.  **formato di intestazione DIB sconosciuto**  
  
     Intestazione della bitmap non è una struttura struttura BITMAPCOREHEADER o BITMAPINFOHEADER.  
  
5.  **Impossibile inizializzare le informazioni sui simboli**  
  
     Questo errore si verifica solo in Visual C++. La causa probabile è che vi siano troppi file aperti o non è possibile aprire o scrivere i file di dati necessari per Visual C++ importare i simboli nello script. Visual C++ tenta di creare questi file nella directory specificata dal **TMP** variabile di ambiente o la directory corrente se non è specificato.  
  
6.  **Non è possibile salvare le informazioni sui simboli**  
  
     Questo errore si verifica solo in Visual C++. La causa probabile è che vi siano troppi file aperti o non è possibile chiudere o scrivere i file di dati necessari per Visual C++ importare i simboli nello script. Visual C++ tenta di utilizzare questi file nella directory specificata dal **TMP** variabile di ambiente o la directory corrente se non è specificato.  
  
7.  **File di risorse di file bitmap non è in formato 2.03**  
  
     Una bitmap usa un formato precedente alla versione 2.03. La bitmap deve essere convertita o ridisegnata usando il formato per la versione 3.00 o successiva.  
  
8.  **Risorsa troppo grande**  
  
     Per Windows 3.1 una risorsa non può superare 65.000 byte. In caso di una risorsa, quindi non sarà in grado di eseguire la compilazione con Visual C++ o il compilatore di risorse della riga di comando. Questo limite non si applica a cursori, icone, bitmap o altre risorse basate su file.  
  
9. **File di risorse non è in formato 3.00**  
  
     Un cursore o icona utilizza un formato precedente alla versione 3.00. La risorsa deve essere convertita o ridisegnata utilizzando il formato per la versione 3.00 o successiva.  
  
10. **Impossibile aprire il file temporaneo**  
  
     Il compilatore risorse/Visual C++ non è riuscito ad aprire un file temporaneo. La causa probabile è che non si dispone delle autorizzazioni di scrittura per la directory o la directory non esiste. Il compilatore di risorse/Visual C++ tenta di usare questi file nella directory specificata dalla variabile di ambiente **TMP** o nella directory corrente se non è specificata.