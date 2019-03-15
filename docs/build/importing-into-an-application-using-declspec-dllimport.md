---
title: Importare in un'applicazione che usa declspec
ms.date: 11/04/2016
f1_keywords:
- __declspec
- dllimport
helpviewer_keywords:
- __declspec(dllimport) keyword [C++]
- importing DLLs [C++], __declspec(dllimport)
ms.assetid: edb4da4e-f83a-44cf-a668-9239d49dbe42
ms.openlocfilehash: 30e0f6517f2d749962c5cf49dddb1662c9ccf129
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57810224"
---
# <a name="import-into-an-application-using-declspecdllimport"></a>Importare in un'applicazione che usa declspec

Si dice che un programma che utilizza i simboli pubblici definiti da una DLL di importarli. Quando si crea file di intestazione per le applicazioni che utilizzano le DLL per la compilazione, usare **declspec** nelle dichiarazioni dei simboli pubblici. La parola chiave **declspec** funziona se si esporta DEF (file) o con il **dllexport** (parola chiave).

Per rendere il codice più leggibile, definire una macro per **declspec** e quindi usare la macro per dichiarare ogni simbolo importato:

```
#define DllImport   __declspec( dllimport )

DllImport int  j;
DllImport void func();
```

Usando **declspec** è facoltativo in dichiarazioni di funzione, ma il compilatore produce codice più efficiente se si utilizza questa parola chiave. Tuttavia, è necessario utilizzare **declspec** eseguibile di importazione accedere agli oggetti e i simboli di dati pubblici della DLL. Si noti che gli utenti della DLL è comunque necessario eseguire il collegamento con una libreria di importazione.

È possibile usare lo stesso file di intestazione per la DLL e l'applicazione client. A tale scopo, utilizzare un simbolo del preprocessore speciale che indica se si compila la DLL o compilazione dell'applicazione client. Ad esempio:

```
#ifdef _EXPORTING
   #define CLASS_DECLSPEC    __declspec(dllexport)
#else
   #define CLASS_DECLSPEC    __declspec(dllimport)
#endif

class CLASS_DECLSPEC CExampleA : public CObject
{ ... class definition ... };
```

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Importazione ed esportazione di funzioni inline](importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](mutual-imports.md)

## <a name="see-also"></a>Vedere anche

[Importazione in un'applicazione](importing-into-an-application.md)
