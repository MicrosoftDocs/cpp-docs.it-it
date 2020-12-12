---
description: 'Altre informazioni su: funzioni di importazione ed esportazione DLL'
title: Funzioni di importazione ed esportazione DLL
ms.date: 11/04/2016
helpviewer_keywords:
- DLLs [C++], importing
- dllimport attribute [C++], storage-class attribute
- DLL exports [C++]
- declaring functions, with dllexport and dllimport
- extended storage-class attributes
- dllexport attribute [C++], storage-class attribute
ms.assetid: 08d164b9-770a-4e14-afeb-c6f21d9e33e4
ms.openlocfilehash: 9f734d4415b473717ad8cd7c94213f1beaff9dc8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97213930"
---
# <a name="dll-import-and-export-functions"></a>Funzioni di importazione ed esportazione DLL

**Specifico di Microsoft**

Le informazioni più complete e più aggiornate su questo argomento sono disponibili in [dllexport, dllimport](../cpp/dllexport-dllimport.md).

I **`dllimport`** `dllexport` modificatori della classe di archiviazione e sono estensioni specifiche di Microsoft per il linguaggio C. Questi modificatori definiscono in modo esplicito l'interfaccia della DLL per il client (file eseguibile o un'altra DLL). La dichiarazione di funzioni come `dllexport` elimina la necessità di un file di definizione di modulo (con estensioni def). È anche possibile usare i **`dllimport`** `dllexport` modificatori e con i dati e gli oggetti.

I **`dllimport`** `dllexport` modificatori della classe di archiviazione e devono essere usati con la parola chiave della sintassi degli attributi estesa, **`__declspec`** , come illustrato nell'esempio seguente:

```
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

DllExport void func();
DllExport int i = 10;
DllExport int j;
DllExport int n;
```

Per informazioni specifiche sulla sintassi per i modificatori della classe di archiviazione estesi, vedere [Attributi di classi di archiviazione estesi](../c-language/c-extended-storage-class-attributes.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Definizioni di funzioni C](../c-language/c-function-definitions.md)
