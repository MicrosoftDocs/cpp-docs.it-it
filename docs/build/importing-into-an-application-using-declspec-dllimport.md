---
title: Importare in un'applicazione tramite __declspec(dllimport)
ms.date: 11/04/2016
helpviewer_keywords:
- __declspec(dllimport) keyword [C++]
- importing DLLs [C++], __declspec(dllimport)
ms.assetid: edb4da4e-f83a-44cf-a668-9239d49dbe42
ms.openlocfilehash: fd7d42ec5a76b92aa789a3a20f38e6b2c0fd2cb1
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79440417"
---
# <a name="import-into-an-application-using-__declspecdllimport"></a>Importare in un'applicazione tramite __declspec(dllimport)

Un programma che usa i simboli pubblici definiti da una DLL viene detto importarli. Quando si creano file di intestazione per le applicazioni che usano le dll per la compilazione con, usare **__declspec (dllimport)** nelle dichiarazioni dei simboli pubblici. La parola chiave **__declspec (dllimport)** funziona sia che si esporti con i file def o con la parola chiave **__declspec (dllexport)** .

Per rendere il codice più leggibile, definire una macro per **__declspec (dllimport)** e quindi usare la macro per dichiarare ogni simbolo importato:

```
#define DllImport   __declspec( dllimport )

DllImport int  j;
DllImport void func();
```

L'uso di **__declspec (dllimport)** è facoltativo per le dichiarazioni di funzione, ma il compilatore produce codice più efficiente se si usa questa parola chiave. Tuttavia, è necessario usare **__declspec (dllimport)** per l'eseguibile di importazione per accedere ai simboli e agli oggetti dei dati pubblici della dll. Si noti che gli utenti della DLL devono ancora collegarsi a una libreria di importazione.

È possibile utilizzare lo stesso file di intestazione sia per la DLL che per l'applicazione client. A tale scopo, utilizzare un simbolo del preprocessore speciale che indica se si sta compilando la DLL o compilando l'applicazione client. Ad esempio:

```
#ifdef _EXPORTING
   #define CLASS_DECLSPEC    __declspec(dllexport)
#else
   #define CLASS_DECLSPEC    __declspec(dllimport)
#endif

class CLASS_DECLSPEC CExampleA : public CObject
{ ... class definition ... };
```

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Importazione ed esportazione di funzioni inline](importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](mutual-imports.md)

## <a name="see-also"></a>Vedere anche

[Importazione in un'applicazione](importing-into-an-application.md)
