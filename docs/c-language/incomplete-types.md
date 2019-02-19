---
title: Tipi incompleti
ms.date: 11/04/2016
helpviewer_keywords:
- void keyword [C], incomplete
- types [C], incomplete
- incomplete types
- unions, incomplete
- arrays [C], incomplete types
- void keyword [C]
- structures, incomplete
ms.assetid: 01bc0cf6-9fa7-458c-9371-ecbe54ea6aee
ms.openlocfilehash: e7a5cd7624b55e7bce0fbd09451ab42426f5bc37
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56151728"
---
# <a name="incomplete-types"></a>Tipi incompleti

Un *tipo incompleto* è un tipo che descrive un identificatore, ma non dispone delle informazioni necessarie per determinare la dimensione dell'identificatore. Un tipo incompleto può essere uno degli elementi seguenti:

- Tipo di struttura i cui membri non sono ancora stati specificati.

- Tipo di unione i cui membri non sono ancora stati specificati.

- Tipo di matrice le cui dimensioni non sono ancora state specificate.

Il tipo **void** è un tipo incompleto che non può essere completato. Per completare un tipo incompleto, specificare le informazioni mancanti. Negli esempi seguenti viene illustrato come creare e completare i tipi incompleti.

- Per creare un tipo di struttura incompleto, dichiarare un tipo di struttura senza specificare i relativi membri. In questo esempio il puntatore `ps` punta a un tipo di struttura incompleto denominato `student`.

    ```C
    struct student *ps;
    ```

- Per completare un tipo di struttura incompleto, dichiarare successivamente lo stesso tipo di struttura nello stesso ambito con i relativi membri specificati, come illustrato di seguito:

    ```C
    struct student
    {
        int num;
    }                   /* student structure now completed */
    ```

- Per creare un tipo di matrice incompleto, dichiarare un tipo di matrice senza specificare il numero di ripetizioni relativo. Ad esempio:

    ```C
    char a[];  /* a has incomplete type */
    ```

- Per completare un tipo di matrice incompleto, dichiarare successivamente lo stesso nome nello stesso ambito con il numero di ripetizioni specificato, come illustrato di seguito:

    ```C
    char a[25]; /* a now has complete type */
    ```

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e tipi](../c-language/declarations-and-types.md)
