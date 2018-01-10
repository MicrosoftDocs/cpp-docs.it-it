---
title: 'Procedura: effettuare il marshalling strutture tramite PInvoke | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
helpviewer_keywords:
- data marshaling [C++], structures
- platform invoke [C++], structures
- interop [C++], structures
- marshaling [C++], structures
ms.assetid: 35997e6f-9251-4af3-8c6e-0712d64d6a5d
caps.latest.revision: "30"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 5bfca720a97ac8462afa970e54f13e0bd74a7808
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-marshal-structures-using-pinvoke"></a>Procedura: Effettuare il marshalling di strutture tramite PInvoke
In questo documento viene illustrato come funzioni native che accettano stringhe di tipo C possono essere chiamate da funzioni gestite che forniscono un'istanza di <xref:System.String> tramite P/Invoke. Sebbene sia consigliabile utilizzare la funzionalità di interoperabilità C++ anziché P/Invoke perché P/Invoke fornisce minimo in fase di compilazione segnalazione errori, non è indipendente dai tipi e può essere difficile da implementare, se l'API non gestita viene fornito come una DLL e il codice sorgente non è disponibile, P/Invoke è l'unica opzione. In caso contrario, vedere i seguenti documenti:  
  
-   [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)  
  
-   [Procedura: Effettuare il marshalling di strutture tramite PInvoke](../dotnet/how-to-marshal-structures-using-pinvoke.md)  
  
 Per impostazione predefinita, strutture native e gestite vengono disposti in modo diverso in memoria, correttamente il passaggio di strutture oltre i limiti gestiti/non gestiti non richiede passaggi aggiuntivi per mantenere l'integrità dei dati.  
  
 Questo documento illustra i passaggi necessari per definire gli equivalenti gestiti delle strutture native e come strutture risultanti possono essere passate alle funzioni non gestite. Questo documento si presuppone che semplice strutture, ovvero quelli che non contengono puntatori o stringhe, vengono utilizzati. Per informazioni sull'interoperabilità copiabili, vedere [utilizzando l'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md). P/Invoke devono avere tipi non copiabili come valore restituito. Tipi copiabili hanno la stessa rappresentazione nel codice gestito e non gestito. Per ulteriori informazioni, vedere [tipi copiabili e Non copiabili](http://msdn.microsoft.com/Library/d03b050e-2916-49a0-99ba-f19316e5c1b3).  
  
 Il marshalling di semplici strutture copiabili oltre i limiti gestiti/non gestiti non innanzitutto è necessario gestite versioni di ogni struttura nativa definire. Queste strutture possono avere qualsiasi nome valido. non vi è alcuna relazione tra la versione nativa e gestita delle due strutture diverso del layout dei dati. Pertanto, è essenziale che la versione gestita contiene campi che sono le stesse dimensioni e nello stesso ordine della versione nativa. (Non è presente alcun meccanismo per assicurare che le versioni native e gestite della struttura sono equivalenti, pertanto le incompatibilità saranno visibili in fase di esecuzione. È compito del programmatore assicurare che le due strutture abbiano lo stesso layout di dati).  
  
 Poiché i membri di strutture gestite vengono riorganizzati in alcuni casi per migliorare le prestazioni, è necessario utilizzare il <xref:System.Runtime.InteropServices.StructLayoutAttribute> attributo per indicare che la struttura vengono disposti in sequenza. È inoltre consigliabile impostare in modo esplicito sia uguale a quella utilizzata dalla struttura di nativo impostazione di compressione della struttura. (Anche se per impostazione predefinita, Visual C++ Usa compressione per il codice gestito una struttura di 8 byte).  
  
1.  Successivamente, utilizzare <xref:System.Runtime.InteropServices.DllImportAttribute> per dichiarare i punti di ingresso che corrispondono a eventuali funzioni non gestite che accettano la struttura, ma utilizzano la versione gestita della struttura nelle firme della funzione, a cui è impostato HDR se si utilizza lo stesso nome per entrambe le versioni di struttura.  
  
2.  Codice gestito può passare la versione gestita della struttura per le funzioni non gestite come se fossero in realtà funzioni gestite. Queste strutture possono essere passate per valore o per riferimento, come illustrato nell'esempio seguente.  
  
## <a name="example"></a>Esempio  
 Il codice seguente è costituito da una funzione non gestita e un modulo gestito. Il modulo non gestito è una DLL che definisce una struttura denominata posizione e una funzione denominata GetDistance che accetta due istanze della struttura di percorso. Il secondo modulo è un'applicazione della riga di comando gestita che importa la funzione GetDistance, ma definisce in termini di un equivalente gestito della struttura di percorso, MLocation. In pratica sarebbe probabilmente essere utilizzato lo stesso nome per entrambe le versioni della struttura; Tuttavia, un nome diverso è usato per dimostrare che il prototipo DllImport è definito in termini la versione gestita.  
  
 Il modulo gestito viene compilato con /clr, ma con /clr: pure funziona anche. Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
 Si noti che nessuna parte della DLL viene esposto al codice gestito utilizzando la normale #include (direttiva). In effetti, la DLL avviene in fase di esecuzione, in modo non verranno rilevati problemi con le funzioni importate con DllImport in fase di compilazione.  
  
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