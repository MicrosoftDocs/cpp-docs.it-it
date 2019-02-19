---
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
ms.openlocfilehash: 8d703045773e4d2c320eaef2aa80c4ce74d23472
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56149310"
---
# <a name="dll-import-and-export-functions"></a>Funzioni di importazione ed esportazione DLL

**Sezione specifica Microsoft**

Le informazioni più complete e più aggiornate su questo argomento sono disponibili in [dllexport, dllimport](../cpp/dllexport-dllimport.md).

I modificatori della classe di archiviazione **dllimport** e `dllexport` sono estensioni specifiche di Microsoft per il linguaggio C. Questi modificatori definiscono in modo esplicito l'interfaccia della DLL per il client (file eseguibile o un'altra DLL). La dichiarazione di funzioni come `dllexport` elimina la necessità di un file di definizione di modulo (con estensioni def). È anche possibile usare i modificatori **dllimport** e `dllexport` con dati e oggetti.

I modificatori della classe di archiviazione **dllimport** e `dllexport` devono essere usati con la parola chiave della sintassi degli attributi estesa, `__declspec`, come illustrato nell'esempio seguente:

```
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

DllExport void func();
DllExport int i = 10;
DllExport int j;
DllExport int n;
```

Per informazioni specifiche sulla sintassi per i modificatori della classe di archiviazione estesi, vedere [Attributi di classi di archiviazione estesi](../c-language/c-extended-storage-class-attributes.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Definizioni di funzioni C](../c-language/c-function-definitions.md)
