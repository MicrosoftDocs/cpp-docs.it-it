---
title: Aggiunta guidata funzione membro
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.function.overview
helpviewer_keywords:
- Add Member Function Wizard [C++]
ms.assetid: 13b6defc-faa6-4d57-83db-9dd854cbea3d
ms.openlocfilehash: eeca957930f125b430ea1a1c6fb1976a07f8fc09
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51519977"
---
# <a name="add-member-function-wizard"></a>Aggiunta guidata funzione membro

Questa procedura guidata consente di aggiungere una dichiarazione di funzione membro al file di intestazione e un'implementazione della funzione membro stub al file di implementazione per la classe selezionata.

Dopo aver aggiunto la funzione membro usando la procedura guidata, è possibile modificare il codice nell'ambiente di sviluppo.

- **Tipo restituito**

  Imposta il tipo restituito per la funzione membro da aggiungere. È possibile specificare un tipo restituito personalizzato oppure selezionarlo dall'elenco dei tipi disponibili. Per altre informazioni sui tipi, vedere [Tipi fondamentali](../cpp/fundamental-types-cpp.md).

  |            |                   |                   |
  |------------|-------------------|-------------------|
  |  **char**  |      **int**      | **unsigned int**  |
  | **double** |     **long**      | **unsigned long** |
  | **float**  |     **short**     |     **void**      |
  | `HRESULT`  | **unsigned char** |                   |

- **Nome funzione**

  Imposta il nome della funzione membro da aggiungere.

- **Tipo parametro**

  Imposta il tipo di parametro da aggiungere per la funzione membro, se la funzione membro include parametri. È possibile specificare un tipo di parametro personalizzato oppure selezionarlo dall'elenco dei tipi disponibili.

  |            |           |                   |
  |------------|-----------|-------------------|
  |  **char**  |  **int**  | **unsigned char** |
  | **double** | **long**  | **unsigned int**  |
  | **float**  | **short** | **unsigned long** |

- **Nome parametro**

  Imposta il nome di un parametro da aggiungere per la funzione membro, se la funzione membro include parametri.

- **Elenco parametri**

  Visualizza un elenco dei parametri aggiunti alla funzione membro. Per aggiungere un parametro all'elenco, specificare un tipo e un nome nella caselle **Tipo parametro** e **Nome parametro** e fare clic su **Aggiungi**. Per rimuovere un parametro dall'elenco, selezionare il parametro e fare clic su **Rimuovi**.

- **Accesso**

  Imposta l'accesso alla funzione membro. I modificatori di accesso sono parole chiave che specificano l'accesso di altre classi alla funzione membro. Per altre informazioni sula specifica dell'accesso, vedere [Controllo degli accessi ai membri](../cpp/member-access-control-cpp.md). Il livello di accesso alla funzione membro è impostato su **public** per impostazione predefinita.

  - [public](../cpp/public-cpp.md)

  - [protected](../cpp/protected-cpp.md)

  - [private](../cpp/private-cpp.md)

  Controllare se la nuova funzione membro è statica o virtuale e se è inline o pura. Se si imposta la funzione membro come pura, la casella di controllo `Virtual` è selezionata e la casella di controllo **Inline** non è più disponibile. L'impostazione predefinita prevede una funzione membro non statica non virtuale.

  | Opzione | Descrizione |
  |--------|-------------|
  | [Static](../cpp/storage-classes-cpp.md) |  Specifica che la funzione è globale e può essere chiamata all'esterno della classe, anche senza la creazione di istanze della classe. La funzione membro non ha accesso a membri non statici. Una funzione membro specificata come `Static` non può essere virtuale. |
  | [Virtual](../cpp/virtual-cpp.md) | Garantisce che venga chiamata la funzione membro corretta per un oggetto, indipendentemente dall'espressione usata per effettuare la chiamata di funzione. Una funzione membro specificata come `Virtual` non può essere statica. |
  | **Pure** | Indica che non viene fornita alcuna implementazione per la funzione membro virtuale dichiarata. Per questa ragione, è possibile specificare **Pure** solo nelle funzioni membro virtuali. Una classe che contiene almeno una funzione membro virtuale pura è considerata una classe astratta. Le classi derivate dalla classe astratta devono implementare la funzione membro virtuale pura o sono anch'esse classi astratte. |
  | [Inline](../cpp/inline-functions-cpp.md) | Indica al compilatore di inserire una copia del corpo della funzione membro in ogni punto in cui viene chiamata la funzione membro. Una funzione membro specificata come **Inline** non può essere pura. |

- **File con estensione cpp**

  Imposta il percorso del file in cui viene scritta l'implementazione della funzione membro stub. Per impostazione predefinita, l'implementazione viene scritta nel file con estensione cpp della classe in cui viene aggiunta la funzione membro. Fare clic sul pulsante con puntini di sospensione per modificare il nome del file. L'implementazione della funzione membro viene aggiunta al contenuto del file selezionato.

- **Commentoo**

  Specifica un commento nel file di intestazione per la funzione membro.

- **Firma funzione**

  Visualizza la funzione membro così come appare nel codice quando si fa clic **Fine**. Non è possibile modificare il testo in questa casella. Per modificare la funzione membro, modificare le caselle appropriate nella procedura guidata.

## <a name="see-also"></a>Vedere anche

[Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)