---
title: 'Procedura: effettuare il marshalling di strutture tramite PInvoke'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- data marshaling [C++], structures
- platform invoke [C++], structures
- interop [C++], structures
- marshaling [C++], structures
ms.assetid: 35997e6f-9251-4af3-8c6e-0712d64d6a5d
ms.openlocfilehash: e132505ef536a79c67afdd76443c2637c08f923b
ms.sourcegitcommit: 43cee7a0d41a062661229043c2f7cbc6ace17fa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/13/2020
ms.locfileid: "92008748"
---
# <a name="how-to-marshal-structures-using-pinvoke"></a>Procedura: effettuare il marshalling di strutture tramite PInvoke

Questo documento illustra in che modo le funzioni native che accettano struct di tipo C possono essere chiamate da funzioni gestite usando P/Invoke. Sebbene sia consigliabile usare le funzionalità di interoperabilità C++ invece di P/Invoke perché P/Invoke fornisce una piccola segnalazione degli errori in fase di compilazione, non è indipendente dai tipi e può essere noioso da implementare, se l'API non gestita è inclusa nel pacchetto come DLL e il codice sorgente non è disponibile, P/Invoke è l'unica opzione. In caso contrario, vedere i documenti seguenti:

- [Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)

- [Procedura: effettuare il marshalling di stringhe utilizzando PInvoke](../dotnet/how-to-marshal-strings-using-pinvoke.md)

Per impostazione predefinita, le strutture native e gestite sono disposte in modo diverso in memoria, quindi il passaggio di strutture attraverso il limite gestito/non gestito richiede passaggi aggiuntivi per mantenere l'integrità dei dati.

In questo documento vengono illustrati i passaggi necessari per definire gli equivalenti gestiti di strutture native e il modo in cui le strutture risultanti possono essere passate alle funzioni non gestite. In questo documento si presuppone che vengano utilizzate strutture semplici, ovvero quelle che non contengono stringhe o puntatori. Per informazioni sull'interoperabilità non copiabile da copia di bit, vedere Utilizzo dell'interoperabilità [C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md). P/Invoke non può avere tipi non copiabili come valore restituito. I tipi copiabili hanno la stessa rappresentazione in codice gestito e non gestito. Per ulteriori informazioni, vedere la pagina relativa ai [tipi copiabili e non copiabili](/dotnet/framework/interop/blittable-and-non-blittable-types).

Il marshalling di strutture semplici e copiabili tra i limiti gestiti/non gestiti richiede innanzitutto la definizione delle versioni gestite di ogni struttura nativa. Queste strutture possono avere qualsiasi nome valido; non esiste alcuna relazione tra la versione nativa e quella gestita delle due strutture diverse dal layout dei dati. È pertanto fondamentale che la versione gestita contenga campi con le stesse dimensioni e nello stesso ordine della versione nativa. Non esiste alcun meccanismo per garantire che le versioni gestite e native della struttura siano equivalenti, pertanto le incompatibilità non diventeranno evidenti fino alla fase di esecuzione. È responsabilità del programmatore garantire che le due strutture abbiano lo stesso layout di dati.

Poiché i membri delle strutture gestite vengono talvolta ridisposti a scopo di prestazioni, è necessario usare l' <xref:System.Runtime.InteropServices.StructLayoutAttribute> attributo per indicare che la struttura è stata disposta in sequenza. È inoltre consigliabile impostare in modo esplicito l'impostazione di compressione della struttura in modo che corrisponda a quella utilizzata dalla struttura nativa. (Anche se per impostazione predefinita, Visual C++ usa una struttura a 8 byte per il codice gestito).

1. Usare quindi <xref:System.Runtime.InteropServices.DllImportAttribute> per dichiarare i punti di ingresso che corrispondono a tutte le funzioni non gestite che accettano la struttura, ma usano la versione gestita della struttura nelle firme della funzione, che è un punto discutibile se si usa lo stesso nome per entrambe le versioni della struttura.

1. Ora il codice gestito può passare la versione gestita della struttura alle funzioni non gestite come se fossero effettivamente funzioni gestite. Queste strutture possono essere passate per valore o per riferimento, come illustrato nell'esempio seguente.

## <a name="unmanaged-and-a-managed-modules"></a>Moduli non gestiti e gestiti

Il codice seguente è costituito da un modulo non gestito e da un modulo gestito. Il modulo non gestito è una DLL che definisce una struttura denominata location e una funzione chiamata GetDistance che accetta due istanze della struttura location. Il secondo modulo è un'applicazione della riga di comando gestita che importa la funzione GetDistance, ma la definisce in termini di un equivalente gestito della struttura del percorso, MLocation. In pratica, è probabile che lo stesso nome venga usato per entrambe le versioni della struttura. viene tuttavia utilizzato un nome diverso per dimostrare che il prototipo DllImport è definito in termini di versione gestita.

Si noti che nessuna parte della DLL viene esposta al codice gestito utilizzando la tradizionale direttiva #include. In realtà, l'accesso alla DLL viene eseguito solo in fase di esecuzione, quindi i problemi con le funzioni importate con DllImport non verranno rilevati in fase di compilazione.

### <a name="example-unmanaged-dll-module"></a>Esempio: modulo DLL non gestito

```cpp
// TraditionalDll3.cpp
// compile with: /LD /EHsc
#include <iostream>
#include <stdio.h>
#include <math.h>

#define TRADITIONALDLL_EXPORTS
#ifdef TRADITIONALDLL_EXPORTS
   #define TRADITIONALDLL_API __declspec(dllexport)
#else
   #define TRADITIONALDLL_API __declspec(dllimport)
#endif

#pragma pack(push, 8)
struct Location {
   int x;
   int y;
};
#pragma pack(pop)

extern "C" {
   TRADITIONALDLL_API double GetDistance(Location, Location);
   TRADITIONALDLL_API void InitLocation(Location*);
}

double GetDistance(Location loc1, Location loc2) {
   printf_s("[unmanaged] loc1(%d,%d)", loc1.x, loc1.y);
   printf_s(" loc2(%d,%d)\n", loc2.x, loc2.y);

   double h = loc1.x - loc2.x;
   double v = loc1.y = loc2.y;
   double dist = sqrt( pow(h,2) + pow(v,2) );

   return dist;
}

void InitLocation(Location* lp) {
   printf_s("[unmanaged] Initializing location...\n");
   lp->x = 50;
   lp->y = 50;
}
```

### <a name="example-managed-command-line-application-module"></a>Esempio: modulo dell'applicazione della riga di comando gestito

```cpp
// MarshalStruct_pi.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

[StructLayout(LayoutKind::Sequential, Pack=8)]
value struct MLocation {
   int x;
   int y;
};

value struct TraditionalDLL {
   [DllImport("TraditionalDLL3.dll")]
   static public double GetDistance(MLocation, MLocation);
   [DllImport("TraditionalDLL3.dll")]
   static public double InitLocation(MLocation*);
};

int main() {
   MLocation loc1;
   loc1.x = 0;
   loc1.y = 0;

   MLocation loc2;
   loc2.x = 100;
   loc2.y = 100;

   double dist = TraditionalDLL::GetDistance(loc1, loc2);
   Console::WriteLine("[managed] distance = {0}", dist);

   MLocation loc3;
   TraditionalDLL::InitLocation(&loc3);
   Console::WriteLine("[managed] x={0} y={1}", loc3.x, loc3.y);
}
```

```Output
[unmanaged] loc1(0,0) loc2(100,100)
[managed] distance = 141.42135623731
[unmanaged] Initializing location...
[managed] x=50 y=50
```

## <a name="see-also"></a>Vedere anche

[Utilizzo di PInvoke esplicito in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
