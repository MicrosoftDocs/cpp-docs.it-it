---
title: 'Procedura: effettuare il marshalling strutture tramite PInvoke | Microsoft Docs'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- data marshaling [C++], structures
- platform invoke [C++], structures
- interop [C++], structures
- marshaling [C++], structures
ms.assetid: 35997e6f-9251-4af3-8c6e-0712d64d6a5d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a26394a906f40d6dc194118bb312cfe1a0ce834e
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43219884"
---
# <a name="how-to-marshal-structures-using-pinvoke"></a>Procedura: Effettuare il marshalling di strutture tramite PInvoke
Questo documento illustra la modalità native funzioni che accettano le strutture di tipo C possono essere chiamate da funzioni gestite dal tramite P/Invoke. Sebbene sia consigliabile usare le funzionalità di interoperabilità C++ invece di P/Invoke perché P/Invoke fornisce la segnalazione, little errori in fase di compilazione non è indipendente dai tipi e può essere noioso da implementare, se l'API non gestita viene assemblato come una DLL e il codice sorgente non è disponibile, P/Invoke è l'unica opzione. In caso contrario, vedere i documenti seguenti:  
  
-   [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
  
-   [Procedura: Effettuare il marshalling di stringhe tramite PInvoke](../dotnet/how-to-marshal-strings-using-pinvoke.md)
  
 Per impostazione predefinita, le strutture native e gestite vengono disposti in modo diverso in memoria, correttamente il passaggio di strutture oltre i limiti gestiti/non gestiti richiede passaggi aggiuntivi per mantenere l'integrità dei dati.  
  
 Questo documento illustra i passaggi necessari per definire gli equivalenti gestiti delle strutture native e come strutture risultanti possono essere passate alle funzioni non gestite. Questo documento si presuppone che semplice strutture, ovvero quelle che non contengono puntatori o le stringhe, vengono usati. Per informazioni sull'interoperabilità non copiabili da blt, vedere [con funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md). P/Invoke non possono avere tipi non copiabili da blt come valore restituito. Tipi copiabili da blt hanno la stessa rappresentazione nel codice gestito e non gestito. Per altre informazioni, vedere [tipi copiabili e Non copiabili da blt](https://msdn.microsoft.com/Library/d03b050e-2916-49a0-99ba-f19316e5c1b3).  
  
 Marshalling semplice, strutture copiabile da blt oltre i limiti gestiti/non gestiti prima di tutto è necessario la definizione di versioni non gestite di ogni struttura nativa. Queste strutture possono avere qualsiasi nome valido. non è presente alcuna relazione tra la versione nativa e gestita delle due strutture diverso da del layout dei dati. Pertanto, è fondamentale che la versione gestita contiene campi che sono le stesse dimensioni e nello stesso ordine in cui la versione nativa. (Non è previsto alcun meccanismo per garantire che le versioni native e gestite della struttura sono equivalenti, pertanto le incompatibilità saranno visibili alla fase di esecuzione. È compito del programmatore garantire che le due strutture hanno lo stesso layout di dati).  
  
 Poiché i membri di strutture gestite vengono riorganizzati in alcuni casi per migliorare le prestazioni, è necessario usare il <xref:System.Runtime.InteropServices.StructLayoutAttribute> attributo per indicare che la struttura vengono disposti in ordine sequenziale. È anche una buona idea impostare in modo esplicito la struttura sia analoga a quella utilizzata dalla struttura nativa di impostazione di compressione. (Anche se per impostazione predefinita, Visual C++ Usa una struttura di 8 byte di compressione per il codice gestito).  
  
1.  Successivamente, utilizziamo <xref:System.Runtime.InteropServices.DllImportAttribute> per dichiarare i punti di ingresso che corrispondono a qualsiasi funzione non gestite che accettano la struttura, ma userà la versione gestita della struttura nelle firme della funzione, ovvero un punto impostato HDR se si usa lo stesso nome per entrambe le versioni del struttura.  
  
2.  A questo punto il codice gestito può passare la versione gestita della struttura per le funzioni non gestite come se fossero funzioni effettivamente gestite. Queste strutture possono essere passate per valore o per riferimento, come illustrato nell'esempio seguente.  
  
## <a name="example"></a>Esempio  
 Il codice seguente è costituito da una funzione non gestita e un modulo gestito. Il modulo non gestito è una DLL che definisce una struttura denominata posizione e una funzione denominata GetDistance che accetta due istanze della struttura di percorso. Il secondo modulo è un'applicazione della riga di comando gestita che importa la funzione GetDistance, ma lo definisce in termini di un equivalente gestito della struttura di percorso, MLocation. In pratica sarebbe probabilmente essere usato lo stesso nome per entrambe le versioni della struttura; Tuttavia, un nome diverso viene usato di seguito per illustrare che il prototipo di DllImport è definito in termini di versione gestita.  
  
 Si noti che nessuna parte della DLL viene esposta al codice gestito usando le tradizionali #include (direttiva). In effetti, la DLL si accede in fase di esecuzione, in modo che non vengono rilevati problemi con le funzioni importate con DllImport in fase di compilazione.  
  
```  
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
  
## <a name="example"></a>Esempio  
  
```  
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
 [Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
