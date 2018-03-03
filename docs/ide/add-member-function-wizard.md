---
title: Aggiunta guidata funzione membro | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.codewiz.function.overview
dev_langs:
- C++
helpviewer_keywords:
- Add Member Function Wizard [C++]
ms.assetid: 13b6defc-faa6-4d57-83db-9dd854cbea3d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 775b519b304549b474cd21980ef5a4cbe8f2d4d0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="add-member-function-wizard"></a>Aggiunta guidata funzione membro
Questa procedura guidata consente di aggiungere una dichiarazione di funzione membro per il file di intestazione e un'implementazione della funzione membro stub al file di implementazione per la classe selezionata.  
  
 Dopo aver aggiunto la funzione membro utilizzando la procedura guidata, è possibile modificare il codice nell'ambiente di sviluppo.  
  
 **Tipo restituito**  
 Imposta il tipo restituito per la funzione membro che si sta aggiungendo. È possibile fornire un tipo restituito personalizzato oppure è possibile selezionare dall'elenco dei tipi disponibili. Per informazioni sui tipi, vedere [tipi fondamentali](../cpp/fundamental-types-cpp.md).  
  
||||  
|-|-|-|  
|`char`|`int`|`unsigned int`|  
|**double**|**long**|`unsigned long`|  
|**float**|**short**|`void`|  
|`HRESULT`|`unsigned char`||  
  
 **Nome della funzione**  
 Imposta il nome della funzione membro che si sta aggiungendo.  
  
 **Tipo di parametro**  
 Imposta il tipo di parametro, che si aggiunge per la funzione membro, se la funzione membro dispone di parametri. È possibile fornire un tipo di parametro o è possibile selezionare dall'elenco dei tipi disponibili.  
  
||||  
|-|-|-|  
|`char`|`int`|`unsigned char`|  
|**double**|**long**|`unsigned int`|  
|**float**|**short**|`unsigned long`|  
  
 **Nome del parametro**  
 Imposta il nome di un parametro che si aggiunge per la funzione membro, se la funzione membro dispone di parametri.  
  
 **Elenco di parametri**  
 Visualizza un elenco dei parametri che aggiunti alla funzione membro. Per aggiungere un parametro all'elenco, fornire un tipo e nome di **tipo di parametro** e **nome del parametro** caselle e fare clic su **Aggiungi**. Per rimuovere un parametro dall'elenco, selezionare il parametro e fare clic su **rimuovere**.  
  
 **Accesso**  
 Imposta l'accesso alla funzione membro. Modificatori di accesso sono parole chiave che specificano l'accesso alla funzione membro altre classi. Vedere [controllo di accesso ai membri](../cpp/member-access-control-cpp.md) per ulteriori informazioni sull'impostazione di accesso. Il livello di accesso di funzione membro è impostato su **pubblica** per impostazione predefinita.  
  
-   [public](../cpp/public-cpp.md)  
  
-   [protected](../cpp/protected-cpp.md)  
  
-   [private](../cpp/private-cpp.md)  
  
 Controllare se la nuova funzione membro è statico o virtuale e sia in linea o puro. Se si imposta la funzione membro, come pure, la `Virtual` casella di controllo è selezionata e **Inline** casella di controllo non è più disponibile. Il valore predefinito è una funzione membro non statico, non virtuale.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|[Static](../cpp/storage-classes-cpp.md)|Specifica che la funzione è globale e può essere chiamata all'esterno della classe, anche se non la creazione di istanze. La funzione membro non ha accesso a membri non statici. Una funzione membro `Static` non può essere virtuale.|  
|[Virtuale](../cpp/virtual-cpp.md)|Assicura che la funzione membro corretto viene chiamata per un oggetto, indipendentemente dall'espressione utilizzata per rendere la funzione membro chiamata. Una funzione membro `Virtual` non può essere statico.|  
|**Pure**|Indica che viene fornita alcuna implementazione per la funzione membro virtuale dichiarata; Pertanto, **Pure** può essere specificato solo per funzioni membro virtuali. Una classe che contiene almeno una funzione membro virtuale pura è considerata una classe astratta. Le classi derivate dalla classe astratta devono implementare la funzione membro virtuale pura o, troppo, sono classi astratte.|  
|[Inline](../cpp/inline-functions-cpp.md)|Indica al compilatore di inserire una copia del corpo della funzione membro in ogni posizione in cui che viene chiamata la funzione membro. Una funzione membro **Inline** non può essere puro.|  
  
 **file con estensione cpp**  
 Imposta il percorso del file in cui viene scritta l'implementazione della funzione membro stub. Per impostazione predefinita, che venga scritto nel file con estensione cpp per la classe a cui viene aggiunta la funzione membro. Fare clic sul pulsante con puntini di sospensione per modificare il nome del file. L'implementazione della funzione membro viene aggiunto al contenuto del file selezionato.  
  
 **Commentoo**  
 Fornisce un commento nel file di intestazione per la funzione membro.  
  
 **Firma della funzione**  
 Visualizza la funzione membro, così come appare nel codice, quando si fa clic **fine**. È possibile modificare il testo in questa casella. Per modificare la funzione membro, modificare le caselle appropriate nella procedura guidata.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)