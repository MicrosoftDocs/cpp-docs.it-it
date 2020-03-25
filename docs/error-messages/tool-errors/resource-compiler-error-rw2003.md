---
title: Errore del compilatore di risorse RW2003
ms.date: 11/04/2016
f1_keywords:
- RW2003
helpviewer_keywords:
- RW2003
ms.assetid: 9dc0ba70-6776-4aef-b316-5f1711d8e42e
ms.openlocfilehash: 60e813fff46ebc015f281dfed99d2916ca0eb4bb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190612"
---
# <a name="resource-compiler-error-rw2003"></a>Errore del compilatore di risorse RW2003

Errore di generazione

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. **Errore: la risorsa del file bitmap non è in formato 3,00**

   Le immagini bitmap in formato Windows versione 2. x non possono essere usate nei file di risorse della versione 3. x. È necessario ricreare la bitmap o convertirla nel formato 3. x.

1. **Errore: DIB precedente nel nome di risorsa. Passarlo tramite SDKPAINT**

   Una bitmap indipendente dal dispositivo (DIB) nella risorsa specificata non è compatibile con il formato Windows 3,0. È necessario ricreare la bitmap o convertirla nel formato 3. x.

1. **Errore: il nome della risorsa del file di risorse non è in formato 3,00**

   Un'icona o un cursore nella risorsa specificata usava un formato di una versione precedente di Windows. L'icona o il cursore deve essere ridisegnato o convertito nel formato 3. x.

1. **Formato di intestazione DIB sconosciuto**

   L'intestazione bitmap non è una struttura struttura BITMAPCOREHEADER o BITMAPINFOHEADER.

1. **Impossibile inizializzare le informazioni sui simboli**

   Questo errore si verifica solo in C++Visual. È probabile che si disponga di un numero eccessivo di file aperti oppure che non sia possibile aprire o scrivere nei file di dati C++ necessari affinché l'oggetto visivo possa importare i simboli nello script. L' C++ oggetto visivo tenta di creare questi file nella directory specificata dalla variabile di ambiente **tmp** o nella directory corrente se non è specificato alcun valore.

1. **Non è possibile salvare le informazioni sui simboli**

   Questo errore si verifica solo in C++Visual. È probabile che si disponga di un numero eccessivo di file aperti oppure che non sia possibile chiudere o scrivere nei file di dati C++ necessari affinché Visual importi i simboli nello script. L' C++ oggetto visivo tenta di usare questi file nella directory specificata dalla variabile di ambiente **tmp** o nella directory corrente se non è specificato alcun valore.

1. **Il file di risorse del file bitmap non è in formato 2,03**

   Una bitmap usa un formato precedente alla versione 2.03. La bitmap deve essere convertita o ridisegnata usando il formato per la versione 3.00 o successiva.

1. **Risorsa troppo grande**

   Per Windows 3,1 una risorsa non può superare approssimativamente 65000 byte. Se la risorsa esegue questa operazione, non sarà possibile compilarla con Visual C++ o il compilatore di risorse della riga di comando. Questo limite non si applica a cursori, icone, bitmap o altre risorse basate su file.

1. **Il file di risorse non è in formato 3,00**

   Un cursore o un'icona usava un formato precedente alla versione 3,00. La risorsa deve essere convertita o ridisegnato usando il formato per la versione 3,00 o successiva.

1. **Non è possibile aprire il file temporaneo**

   Il compilatore risorse/Visual C++ non è riuscito ad aprire un file temporaneo. È probabile che non si disponga delle autorizzazioni di scrittura per la directory o che la directory non esista. Il compilatore di risorse/Visual C++ tenta di usare questi file nella directory specificata dalla variabile di ambiente **TMP** o nella directory corrente se non è specificata.
