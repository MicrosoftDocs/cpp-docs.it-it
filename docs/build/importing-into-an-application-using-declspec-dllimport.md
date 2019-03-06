---
title: Importazione in un'applicazione tramite __declspec(dllimport)
ms.date: 11/04/2016
f1_keywords:
- __declspec
- dllimport
helpviewer_keywords:
- __declspec(dllimport) keyword [C++]
- importing DLLs [C++], __declspec(dllimport)
ms.assetid: edb4da4e-f83a-44cf-a668-9239d49dbe42
ms.openlocfilehash: ef01c2905dea215a1a52333ae5611ec58c5f5af4
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57419218"
---
# <a name="importing-into-an-application-using-declspecdllimport"></a>Importazione in un'applicazione tramite __declspec(dllimport)

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

- [Inizializzare una DLL](../build/run-time-library-behavior.md#initializing-a-dll)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](../build/mutual-imports.md)

## <a name="see-also"></a>Vedere anche

[Importazione in un'applicazione](../build/importing-into-an-application.md)
