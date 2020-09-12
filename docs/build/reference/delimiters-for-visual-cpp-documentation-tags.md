---
title: Delimitatori per i tag della documentazione di Visual C++
ms.date: 11/04/2016
helpviewer_keywords:
- XML documentation, delimiters
ms.assetid: debfbdd9-63fa-4c58-a18e-a4d203d241d7
ms.openlocfilehash: e8e312eacb46d82270d7ca1782b04d06012b207d
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041536"
---
# <a name="delimiters-for-visual-c-documentation-tags"></a>Delimitatori per i tag della documentazione di Visual C++

L'uso dei tag della documentazione richiede la specifica di delimitatori per indicare al compilatore il punto di inizio e di fine di un commento relativo alla documentazione.

È possibile usare con i tag della documentazione XML i tipi di delimitatori seguenti:

| Delimitatore | Descrizione |
|-|-|
| `///` | Questo è il formato illustrato negli esempi di documentazione e usato dai modelli di progetto di Visual Studio C++.  |
| `/** */`  | Delimitatori di più righe.  |

Quando si usano i delimitatori `/** */` è necessario rispettare determinate regole di formattazione:

- Per la riga contenente il delimitatore `/**` se la parte restante della riga è rappresentata da uno spazio vuoto, la riga non viene elaborata per i commenti. Se il primo carattere è uno spazio vuoto, lo spazio vuoto viene ignorato e il resto della riga viene elaborato. In caso contrario, l'intero testo della riga dopo il delimitatore `/**` viene elaborato come parte del commento.

- Se per la riga contenente il delimitatore `*/` sono presenti solo spazi vuoti fino al delimitatore `*/`, la riga viene ignorata. In caso contrario, il testo contenuto nella riga fino al delimitatore `*/` viene elaborato come parte del commento, in base alle regole dei criteri di ricerca descritte nel punto che segue.

- Per le righe successive a quella che inizia con il delimitatore `/**`, il compilatore cerca un modello comune all'inizio di ogni riga costituito da uno spazio vuoto facoltativo e un asterisco (`*`), seguiti da altri spazi vuoti facoltativi. Se il compilatore rileva un set comune di caratteri all'inizio di ogni riga, ignorerà il modello per tutte le righe successive al delimitatore `/**` fino a, ed eventualmente includendo, la riga contenente il delimitatore `*/`.

Di seguito alcuni esempi:

- La sola parte del commento riportato di seguito che verrà elaborata è la riga che inizia con `<summary>`. I formati dei due tag seguenti produrranno gli stessi commenti:

    ```cpp
    /**
    <summary>text</summary>
    */
    /** <summary>text</summary> */
    ```

- Il compilatore applica un modello " \* " per ignorare la riga all'inizio della seconda e della terza riga.

    ```cpp
    /**
     * <summary>
     *  text </summary>*/
    ```

- Il compilatore non trova alcun modello in questo commento perché non è presente alcun asterisco nella seconda riga. Di conseguenza, tutto il testo contenuto nella seconda e nella terza riga, fino al delimitatore `*/`, verrà elaborato come parte del commento.

    ```cpp
    /**
     * <summary>
       text </summary>*/
    ```

- In questo commento il compilatore non rileva alcun modello per due motivi. In primo luogo, non vi è alcuna riga che inizia con un numero coerente di spazi prima dell'asterisco. In secondo luogo, la quinta riga inizia con una tabulazione senza corrispondenza degli spazi. Di conseguenza, tutto il testo dalla seconda riga fino al delimitatore `*/` verrà elaborato come parte del commento.

    ```cpp
    /**
      * <summary>
      * text
     *  text2
       *  </summary>
    */
    ```

## <a name="see-also"></a>Vedi anche

[Documentazione XML](xml-documentation-visual-cpp.md)
